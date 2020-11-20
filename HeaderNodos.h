#pragma once
#include "Vlist.h"
#include "Hlist.h"
using namespace System;

class NodoColumn //Nodos de columnas
{
public:
	int index;
	NodoColumn* next;
	NodoColumn* prev;
	Vlist* column;


	NodoColumn(int index) {
		column = new Vlist();
		this->index = index;
		next = nullptr; prev = nullptr;
	}
};


class NodoFill //Nodos de filas, en letras
{
public:
	char FillLetter; 
	int index;
	NodoFill* next;
	NodoFill* prev;
	Hlist* fill;

	NodoFill(int index) {
		fill = new Hlist();
		this->index = index;
		next = nullptr; prev = nullptr;
	}
};