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

	size = size + 1;
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

bool Lista::esVacia() {
	if (cabeza == nullptr)
	{
		return true;
	}

	return false;
}

void Lista::buscar(string correo) {
	Nodo* temp = cabeza;
	int cont = 1;
	int cont2 = 0;

	while (temp)
	{
		if (temp->getDato()->getCorreo() == correo) {
			cout << "El contacto se encuentra en la posicion: " << cont << endl;
			cont2++;
		}
		temp = temp->getSiguiente();
		cont++;
	}

	if (cont2 == 0)
	{
		cout << "El contacto no existe en la lista: " << endl;
	}
}

void Lista::eliminar() {
	cabeza->eliminarTodo();
	cabeza = 0;
}

void Lista::eliminarElemento(int pos) {
	Nodo* aux = cabeza;
	Nodo* aux2 = aux->getSiguiente();

	if (pos < 1 || pos > size)
	{
		cout << "Esta fuera del rango" << endl;
	}
	else if (pos == 1)
	{
		cabeza = aux->getSiguiente();
	}
	else
	{
		for (int i = 2; i <= pos; i++)
		{
			if (i == pos) {
				Nodo* auxNodo = aux2;
				aux->setSiguiente(aux2->getSiguiente());
				delete auxNodo;
				size--;
			}

			aux = aux->getSiguiente();
			aux2 = aux2->getSiguiente();
		}
	}
}