#pragma once
#include <iostream>
#include "HeaderNodos.h"
using namespace System;

class HorizontalHeaders
{
public:
	NodoFill* first;
	NodoFill* last;

	HorizontalHeaders() {
		first = nullptr;
		last = nullptr;
	}

	void InsertAtStart(NodoFill* newHeader) {
		first->prev = newHeader;
		newHeader->next = first;
		first = newHeader;
	}

	void InsertAtMid(NodoFill* newHeader) {
		NodoFill* HeaderAux;
		NodoFill* HeaderAux1;

		HeaderAux = first;
		while (HeaderAux->index < newHeader->index) {
			HeaderAux = HeaderAux->next;
		}
		HeaderAux1 = HeaderAux->prev;

		HeaderAux1->next = newHeader;
		HeaderAux->prev = newHeader;
		newHeader->prev = HeaderAux1;
		newHeader->next = HeaderAux;
	}

	void InsertAtEnd(NodoFill* newHeader) {
		last->next = newHeader;
		newHeader->prev = last;
		last = newHeader;
	}

	void Insert(NodoFill* newHeader) {
		if (IsEmpty()) {
			first = newHeader;
			last = newHeader;
		}
		else {
			if (newHeader->index < first->index)
				InsertAtStart(newHeader);
			else if (newHeader->index > last->index)
				InsertAtEnd(newHeader);
			else
				InsertAtMid(newHeader);
		}
	}

	bool IsEmpty() {
		if (first == nullptr)
			return true;
		else
			return false;
	}

	String^ Verify() {
		String^ Ties = " ";
		if (!IsEmpty())
		{
			NodoFill* HeaderAux;
			HeaderAux = first;

			while (HeaderAux!= nullptr) {
				Ties = Ties + HeaderAux->index + " ";
				HeaderAux = HeaderAux->next;
			}
		}
		return Ties;
	}

	bool VerifyHeader(char fill) {
		if (!IsEmpty()) {
			NodoFill* HeaderAux;
			HeaderAux = first;
			while (HeaderAux!= nullptr) {
				if (HeaderAux->FillLetter == fill)
					return true;
				else
					HeaderAux = HeaderAux->next;
			}
			return false;
		}
		else
			return false;
	}

	NodoFill* Pull(char fill) {
		if (!IsEmpty()) {
			NodoFill* HeaderAux;
			HeaderAux = first;
			while (HeaderAux!= nullptr) {
				if (HeaderAux->FillLetter == fill)
					return HeaderAux;
				else
					HeaderAux = HeaderAux->next;
			}
			return false;
		}
		else
			return false;
	}

};