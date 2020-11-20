#pragma once
#include "Bahia.h"
#include <iostream>
using namespace System;

class Hlist
{
public:
	Bahia* first;
	Bahia* last;

	Hlist() {
		first = nullptr;
		last = nullptr;
	}

	void InsertAtStart(Bahia* newBahia) {
		first->Left = newBahia;
		newBahia->Right = first;
		first = newBahia;
	}

	void InsertAtMid(Bahia* newBahia) {
		Bahia* BahiaAux = new Bahia();
		Bahia* BahiaAux1 = new Bahia();

		BahiaAux = first;
		while (BahiaAux->colums < newBahia->colums) {
			BahiaAux = BahiaAux->Right;
		}
		BahiaAux1 = BahiaAux->Left;

		BahiaAux1->Right = newBahia;
		BahiaAux->Left = newBahia;
		newBahia->Left = BahiaAux1;
		newBahia->Right = BahiaAux;
	}


	void InsertAtEnd(Bahia* newBahia) {
		last->Right = newBahia;
		newBahia->Left = last;
		last = newBahia;
	}

	void InsertBahia(Bahia* newBahia) {
		if (IsEmpty()) {
			first = newBahia;
			last = newBahia;
		}
		else {
			if (newBahia->colums < first->colums)
				InsertAtStart(newBahia);
			else if (newBahia->colums > last->colums)
				InsertAtEnd(newBahia);
			else
				InsertAtMid(newBahia);
		}
	}

	void ExtractStart() {
		Bahia* BahiaAux = first->Right;
		delete first;
		first = BahiaAux;
		first->Left = nullptr;
	}

	void ExtractEnd() {
		Bahia* BahiaAux = last->Left;
		delete last;
		last = BahiaAux;
		last->Right = nullptr;
	}

	void ExtractMid(int column) {
		Bahia* BahiaAux = new Bahia();
		BahiaAux = first;
		while (BahiaAux != nullptr) {
			if (BahiaAux->colums == column) {
				Bahia* BahiaPrev = BahiaAux->Left;
				Bahia* BahiaNext = BahiaAux->Right;
				BahiaPrev->Right = BahiaNext;
				BahiaNext->Left = BahiaPrev;
				BahiaAux = NULL;
			}
			else {
				BahiaAux = BahiaAux->Right;
			}
		}
	}

	String^ DeleteBahia(int colums) {
		String^ res = " ";
		if (IsEmpty() == true) {
			res = "0";
		}
		if (colums == first->colums && colums == last->colums) {
			Bahia* aux = first;
			first = nullptr; last = nullptr;
			delete aux;
			res = "1";
		}
		else {
			if (colums == first->colums) {
				ExtractStart();
				res = "2";
			}
			else if (colums == last->colums) {
				ExtractEnd();
				res = "3";
			}
			else {
				ExtractMid(colums);
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
				Ties = Ties + BahiaAux->colums + " ";
				BahiaAux = BahiaAux->Right;
			}
		}
		return Ties;
	}

	Bahia* Pull(int fill, int colums) {
		if (!IsEmpty()) {

			Bahia* BahiaAux = first;
			while (BahiaAux != nullptr) {
				if (BahiaAux->fill == fill && BahiaAux->colums == colums)
					return BahiaAux;
				else
					BahiaAux = BahiaAux->Right;
			}
			return false;
		}
		else {
			return false;
		}
	}

	bool IsEmpty() {
		if (first == nullptr)
			return true;
		else
			return false;
	}

};