#include "Lista.h"
#include "Nodo.h"
#include <string>
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
	size = size + 1;
		
}

void Lista::agregarOrdenado(int data) {
	Nodo *temp = new Nodo(data);
	if (cabeza == nullptr || temp->getDato() < cabeza->getDato())
	{
		temp->setSiguiente(cabeza);
		cabeza = temp;
	}
	else
	{
		Nodo* aux = cabeza;
		while ( aux->getSiguiente() != nullptr && aux->getSiguiente()->getDato() < temp->getDato())
		{
			aux = aux->getSiguiente();

		}
		if (aux->getSiguiente() != nullptr)
		{
			temp->setSiguiente(aux->getSiguiente());
		}

		aux->setSiguiente(temp);
	}

	size = size + 1;
}


void Lista::mostrarLista() {
	Nodo* aux = this->cabeza;
	while (aux->getSiguiente() != nullptr)
	{
		cout << aux->getDato() << endl;
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

void Lista::buscar(int _data) {
	Nodo* temp = cabeza;
	int cont = 1;
	int cont2 = 0;

	while (temp)
	{
		if (temp->getDato() == _data){
			cout << "El numero se enuentra en la posicion: " << cont <<endl;
			
			cont2++;
		}
		temp = temp->getSiguiente();
		
		cont++;
	}

	if (cont2 == 0)
	{
		cout << "No existe el numero en la lista" << endl;
		
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