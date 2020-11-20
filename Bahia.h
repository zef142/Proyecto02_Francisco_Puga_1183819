#pragma once
#include "PileProduct.h"

class Bahia
{
public:
	int fill;
	int colums;
	int product[3];
	int deleted;
	double Wavailable;
	double Wmax;
	PileProduct* pile;
	Bahia* Left;
	Bahia* Right;
	Bahia* Up;
	Bahia* Down;

	Bahia() {
		Left = nullptr;
		Right = nullptr;
		Up = nullptr;
		Down = nullptr;
		pile = new PileProduct();
		deleted = 0;
	};

	~Bahia() { };
};