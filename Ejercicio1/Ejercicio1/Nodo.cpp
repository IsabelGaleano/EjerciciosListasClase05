#include "Nodo.h"

Nodo::Nodo() {

}

Nodo::Nodo(int _dato) {
	dato = _dato;
}

void Nodo::setDato(int _dato) {
	dato = _dato;
}

int Nodo::getDato() {
	return dato;
}

void Nodo::setSiguiente(Nodo *_siguiente) {
	siguiente = _siguiente;
}

Nodo *Nodo::getSiguiente() {
	return siguiente;
}

void Nodo::eliminarTodo() {
	if (siguiente)
	{
		siguiente->eliminarTodo();
		delete this;
	}
}

