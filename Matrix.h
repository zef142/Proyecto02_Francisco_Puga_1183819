#pragma once
#include "HHlist.h"
#include "VHlist.h"
class Matrix {
public:
	HorizontalHeaders* HHlist;
	VerticalHeaders* VHlist;
	Matrix* next;

	Matrix() {
		HHlist = new HorizontalHeaders();
		VHlist = new VerticalHeaders();
		next = nullptr;
	}

	void InsertBahia(char fill, int column, Bahia* newBahia) {//Creacion de nueva bahia
		int indexfill = ObtainIndexFill(fill);
		newBahia->fill = indexfill;
		newBahia->colums = column;

		if (VHlist->VerifyHeader(column) == false) {
			NodoColumn* newHeaderColumn = new NodoColumn(column);
			VHlist->Insert(newHeaderColumn);
		}
		if (HHlist->VerifyHeader(fill) == false) {
			NodoFill* newHeaderFill = new NodoFill(indexfill);
			newHeaderFill->FillLetter = fill;
			HHlist->Insert(newHeaderFill);
		}

		NodoColumn* HeaderColumnAux;
		NodoFill* HeaderFillAux;
		HeaderColumnAux = VHlist->Pull(column);
		HeaderFillAux = HHlist->Pull(fill);
		HeaderFillAux->fill->InsertBahia(newBahia);
		HeaderColumnAux->column->InsertBahia(newBahia);

	}

	String^ DeleteBahia(char fill, int column) { //Eliminacion de bahia y reubicacion de productos
		String^ resp = "Fallo intentando eliminar Bahia.";
		int indixfill = ObtainIndexFill(fill);
		NodoColumn* HeaderColumn = VHlist->Pull(column);
		NodoFill* HeaderFill = HHlist->Pull(fill);
		Bahia* BahiaAux = HeaderFill->fill->Pull(indixfill, column);

		if (HeaderColumn != nullptr && HeaderFill != nullptr) {
			resp = "";
			int RelocPos = 0;
			if (BahiaAux != nullptr) {
				if (BahiaAux->Wavailable != BahiaAux->Wmax) {
					int CantPrduct = BahiaAux->pile->count;
					BahiaAux->deleted = 1; 
					for (int i = 0; i < CantPrduct; i++) {
						Product* product = BahiaAux->pile->YeetusDelete();
						String^ InsertResult = InsertProduct(product);
						if (String::Compare(InsertResult, "false") == 0) {
							BahiaAux->pile->insertProduct(product);
							resp = resp + " No se encontro bahia para el producto: " + product->nombre + ".";
							RelocPos = 1;
						}
						else {
							resp = resp + " El producto " + product->nombre + InsertResult + ".";
						}
					}
				}
			}
			Char filaChar = HeaderFill->FillLetter;
			if (RelocPos == 0) {
				HeaderColumn->column->DeleteBahia(indixfill);
				HeaderFill->fill->DeleteBahia(column); 
				resp = "Bahia " + filaChar + column + " Borrada. " + resp;
			}
			else {
				resp = "Bahia " + filaChar + column + " Imposible Eliminar. " + resp;
				BahiaAux->deleted = 0;
			}
		}
		return resp;
	}

	String^ InsertProduct(Product* newProduct) {//Se busca una bahia con la capacidad para alamacenar el producto
		String^ result = "false";
		if (HHlist->IsEmpty()) {
			result = "Ingreso de producto fallida. Esta bodega no tiene bahias, se necesita crear bahia primero";
			return result;
		}
		double TotalW = newProduct->WUnit * newProduct->cant;
		NodoFill* HeaderAux = HHlist->first;
		Bahia* BahiaAux;
		while (HeaderAux!= nullptr) {
			BahiaAux = HeaderAux->fill->first;
			while (BahiaAux != nullptr) {
				if (BahiaAux->Wavailable >= TotalW && BahiaAux->deleted!= 1) {
					for (int i = 0; i < 3; i++) {
						if (BahiaAux->product[i] == newProduct->ProdType) {
							BahiaAux->pile->insertProduct(newProduct);
							BahiaAux->Wavailable = BahiaAux->Wavailable - TotalW;
							Char fila = HeaderAux->FillLetter;
							result = "Se inserto el producto: " + newProduct->nombre + " en la bahia: " + fila + BahiaAux->colums;
							return result;
						}
					}
				}
				BahiaAux = BahiaAux->Right;
			}
			HeaderAux = HeaderAux->next;
		}
		return result;
	}

	String^ RetireProduct(Product* ProductAux) { //Se busca en la bahia por el producto y cantidad solicitadas, el proceso es fila por fila
		String^ Result = "";
		if (HHlist->IsEmpty()) {
			Result = "Retiro de producto fallido. Esta bodega no tiene bahias, se necesita crear bahia primero";
			return Result;
		}

		NodoFill* HeaderAux = HHlist->first;
		Bahia* BahiaAux;
		while (HeaderAux!= nullptr) {
			BahiaAux = HeaderAux->fill->first;
			while (BahiaAux!= nullptr) {
				if (BahiaAux->Wavailable!= BahiaAux->Wmax) {
					for (int i = 0; i < 3; i++) {
						if (BahiaAux->product[i] == ProductAux->ProdType) {
							Product* BahiaAux1 = BahiaAux->pile->Pull(ProductAux->ProdType);
							if (BahiaAux1 != nullptr && BahiaAux1->cant >= ProductAux->cant) {
								BahiaAux1->cant = BahiaAux1->cant - ProductAux->cant;
								BahiaAux->Wavailable = BahiaAux->Wavailable + BahiaAux1->WUnit * ProductAux->cant;
								BahiaAux->pile->Verify();
								Char fill = HeaderAux->FillLetter;
								Result = "Se ha retirado " + ProductAux->cant + " unidades del producto: " +
									ProductAux->nombre + ", bahia: " + fill + BahiaAux->colums
									+ ". Responsable:  " + ProductAux->responsable + " , fecha:" + ProductAux->fecha;
								return Result;
							}
						}
					}
				}
				BahiaAux = BahiaAux->Right;
			}
			HeaderAux = HeaderAux->next;
		}
		Result = "Retiro de producto fallido. El producto no existe o no hay cantidad suficiente";
		return Result;
	}

	int ObtainIndexFill(char fill) {
		char fills[5] = { 'A', 'B', 'C', 'D', 'E' };
		int i = 0;
		for (i = 0; i < 5; i++) {
			if (fills[i] == fill) {
				return i + 1;
			}
		}
		return 0;
	}
};