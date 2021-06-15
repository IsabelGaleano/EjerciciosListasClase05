#include "Lista.h"
#include "Nodo.h"
#include <iostream>
#include <string>
using namespace std;

Lista::Lista() {
	cabeza = nullptr;
}

void Lista::agregarAlInicio(Contacto* data) {
	Nodo* temp = new Nodo(data);

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

void Lista::mostrarLista() {
	Nodo* aux = this->cabeza;
	Contacto* contacto;
	while (aux != nullptr)
	{
		contacto = aux->getDato();
		contacto->imprimirInfo();
		aux = aux->getSiguiente();
	}
}
