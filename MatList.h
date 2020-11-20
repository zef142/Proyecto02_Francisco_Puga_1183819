#pragma once
#include "Matrix.h"

class MatList{

public:
	Matrix* fill;
	int count;

	MatList() {
		fill = nullptr;
		count = 0;
	}

	~MatList() {
	}

	void insertMatriz(Matrix* MatList) {
		if (fill == nullptr) {
			fill = MatList;
		}
		else {
			Matrix* MatrizAux = fill;
			while (MatrizAux->next!= nullptr)
			{
				MatrizAux = MatrizAux->next;
			}
			MatrizAux->next = MatList;
		}
		count = count + 1;
	}


};