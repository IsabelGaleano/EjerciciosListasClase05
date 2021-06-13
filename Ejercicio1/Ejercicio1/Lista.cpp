#include "Lista.h"
#include "Nodo.h"
#include <iostream>
using namespace std;

Lista::Lista() {
	cabeza = nullptr;
}

void Lista::agregarAlInicio(int data) {
	Nodo *temp = new Nodo(data);
	
	if (cabeza == nullptr)
	{
		cabeza = temp;
	}
	else
	{
		temp->setSiguiente(cabeza);
		cabeza = temp;
	}
}

void Lista::MostrarLista() {
	Nodo* aux = this->cabeza;
	while (aux->getSiguiente() != nullptr)
	{
		cout << aux->getDato() << endl;
		aux = aux->getSiguiente();
	}
}
