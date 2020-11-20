#pragma once
#include <iostream>
#include "HeaderNodos.h"
using namespace System;

class VerticalHeaders
{
public:
	NodoColumn* first;
	NodoColumn* last;

	VerticalHeaders() {
		first = nullptr;
		last = nullptr;
	}

	void InsertAtStart(NodoColumn* newHeader) {
		first->prev = newHeader;
		newHeader->next = first;
		first = newHeader;
	}

	void InsertAtMid(NodoColumn* newHeader) {
		NodoColumn* HeaderAux;
		NodoColumn* HeaderAux1;

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

	void insertAtEnd(NodoColumn* newHeader) {
		last->next = newHeader;
		newHeader->prev = last;
		last = newHeader;
	}

	void Insert(NodoColumn* newHeader) {
		if (IsEmpty()) {
			first = newHeader;
			last = newHeader;
		}
		else {
			if (newHeader->index < first->index)
				InsertAtStart(newHeader);
			else if (newHeader->index > last->index)
				insertAtEnd(newHeader);
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
			NodoColumn* HeaderAux;
			HeaderAux = first;

			while (HeaderAux!= nullptr) {
				Ties = Ties + HeaderAux->index + " ";
				HeaderAux = HeaderAux->next;
			}
		}
		return Ties;
	}

	bool VerifyHeader(int index) {
		if (!IsEmpty()) {
			NodoColumn* HeaderAux;
			HeaderAux = first;
			while (HeaderAux!= nullptr) {
				if (HeaderAux->index == index)
					return true;
				else
					HeaderAux = HeaderAux->next;
			}
			return false;
		}
		else
			return false;
	}

	NodoColumn* Pull(int index) {
		if (!IsEmpty()) {
			NodoColumn* HeaderAux;
			HeaderAux = first;
			while (HeaderAux!= nullptr) {
				if (HeaderAux->index == index)
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