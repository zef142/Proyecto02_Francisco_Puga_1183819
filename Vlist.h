#pragma once
#include "Bahia.h"
#include <iostream>
using namespace System;

class Vlist
{
public:
	Bahia* first;
	Bahia* last;

	Vlist() {
		first = new Bahia();
		last = new Bahia();
		first = nullptr;
		last = nullptr;
	}

	Bahia* NewVBahia(int fill, int colums, int product[3], double Wmax) {
		Bahia* newBahia = new Bahia();

		newBahia->fill = fill;
		newBahia->colums = colums;
		for (int x = 0; x < 3; x++) {
			newBahia->product[x] = product[x];
		}
		newBahia->Wmax = Wmax;
		return newBahia;
	}

	void InsertAtStart(Bahia* newBahia) {
		first->Up = newBahia;
		newBahia->Down = first;
		first = newBahia;
	}

	void InsertAtMid(Bahia* newBahia) {
		Bahia* BahiaAux = new Bahia();
		Bahia* BahiaAux1 = new Bahia();

		BahiaAux = first;
		while (BahiaAux->fill < newBahia->fill) {
			BahiaAux = BahiaAux->Down;
		}
		BahiaAux1 = BahiaAux->Up;

		BahiaAux1->Down = newBahia;
		BahiaAux->Up = newBahia;
		newBahia->Up = BahiaAux1;
		newBahia->Down = BahiaAux;
	}


	void InsertAtEnd(Bahia* newBahia) {
		last->Down = newBahia;
		newBahia->Up = last;
		last = newBahia;
	}

	void InsertBahia(Bahia* newBahia) {
		if (IsEmpty()) {
			first = newBahia;
			last = newBahia;
		}
		else {
			if (newBahia->fill < first->fill)
				InsertAtStart(newBahia);
			else if (newBahia->fill > last->fill)
				InsertAtEnd(newBahia);
			else
				InsertAtMid(newBahia);
		}
	}

	void ExtractStart() {
		Bahia* BahiaAux = first;
		first = first->Down;
		first->Up = nullptr;
	}

	void ExtractEnd() {
		Bahia* BahiaAux = last->Up;
		last = BahiaAux;
		last->Down = nullptr;
	}

	void ExtractMid(int fila) {
		if (!IsEmpty()) {

		}
	}

	String^ DeleteBahia(int fill) {
		Bahia* aux = first;
		String^ res = " ";
		int fill1 = fill;
		if (IsEmpty()) {
			res = "0";
		}
		if (fill == first->fill && fill == last->fill) {

			first = nullptr; last = nullptr;
			res = "1";
		}
		else {
			if (fill == first->fill) {
				ExtractStart();
				res = "2";
			}
			else if (fill == last->fill) {
				ExtractEnd();
				res = "3";
			}
			else {
				Bahia* BahiaAux = new Bahia();
				BahiaAux = first;
				while (BahiaAux!= nullptr) {
					if (BahiaAux->fill == fill1) {
						Bahia* BahiaPrev = BahiaAux->Up;
						Bahia* BahiaNext = BahiaAux->Down;
						BahiaPrev->Down = BahiaNext;
						BahiaNext->Up = BahiaPrev;
						BahiaAux = NULL;
					}
					else {
						BahiaAux = BahiaAux->Down;
					}
				}
				res = "4";
			}
		}
		return res;
	}

	String^ Verify() {
		String^ Ties = " ";
		if (!IsEmpty())
		{
			Bahia* BahiaAux = new Bahia();
			BahiaAux = first;

			while (BahiaAux != nullptr) {
				Ties = Ties + BahiaAux->fill + " ";
				BahiaAux = BahiaAux->Down;
			}
		}
		return Ties;
	}

	bool IsEmpty() {
		if (first == nullptr)
			return true;
		else
			return false;
	}

};