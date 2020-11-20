#pragma once
#include <vcclr.h>
#include <stdlib.h>
using namespace System;

class Product {
public:
	int code;
	int ProdType;
	double WUnit;
	int cant;
	Product* next;
	gcroot<String^> nombre;
	gcroot<String^> responsable;
	gcroot<String^> fecha;

	Product() {
		next = nullptr;
		code = rand();
	}
	~Product(){}
};