#pragma once
#include "Product.h"

class PileProduct {
public:
	Product* pile;
	int count;

	PileProduct() {
		pile = nullptr;
		count = 0;
	}
	~PileProduct(){ }

	void insertProduct(Product* NewProduct) {
		Product* productAux = pile;
		Product* productAux1 = nullptr;

		while (productAux != nullptr && productAux->ProdType < NewProduct->ProdType) {
			productAux1 = productAux;
			productAux = productAux->next;
		}
		if (pile == productAux) {
			pile = NewProduct;
		}
		else {
			productAux1->next = NewProduct;
		}
		NewProduct->next = productAux;
		count = count + 1;
	}

	Product* Pull(int ProdType) {
		Product* productAux = pile;
		if (!IsEmpty()) {

			while (productAux != nullptr)
			{
				if (productAux->ProdType == ProdType) {
					return productAux;
				}
				else {
					productAux = productAux->next;
				}
			}
			productAux = nullptr;

		}
		return productAux;
	}

	Product* YeetusDelete() {
		Product* productAux = pile;
		if (!IsEmpty()) {

			if (productAux->next == nullptr)
			{
				pile = nullptr;
			}
			else {
				pile = pile->next;
			}
			count = count - 1;
			productAux->next = nullptr;
		}
		return productAux;
	}

	String^ CantProducto() {//Muestra la cantidad del tipo de producto
		String^ result = "Unidades: ";
		Product* productAux = pile;
		int ropa = 0; 
		int office = 0;
		int construction = 0;
		while (productAux!= nullptr) {
			switch (productAux->ProdType)
			{
			case 1: office = office + productAux->cant;
				break;
			case 2: ropa = ropa + productAux->cant;
				break;
			case 3: construction = construction + productAux->cant;
				break;
			default:break;
			}
			productAux = productAux->next;
		}
		if (office != 0) {result = result + " Tipo 1: " + office + ".";}
		if (ropa != 0) {result = result + " Tipo 2: " + ropa + ".";}
		if (construction != 0) {result = result + " Tipo 3: " + construction + ".";}
		return result;
	}

	void Verify() {// Si el producto tiene valor 0, se elimina
		if (!IsEmpty()) {
			Product* productAux = pile;
			while (productAux != nullptr)
			{
				if (productAux->cant == 0) {
					if (productAux->next == nullptr)
					{
						pile = nullptr;
					}
					else {
						pile = pile->next;
						productAux = nullptr;
						productAux = pile;
					}
				}
				productAux = productAux->next;
			}
		}
	}

	bool IsEmpty() {
		if (pile == nullptr)
			return true;
		else
			return false;
	}
};