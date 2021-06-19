#include "Nodo.h"
#include "Contacto.h"
Nodo::Nodo() {

}

Nodo::Nodo(Contacto* _dato) {
	dato = _dato;
}

void Nodo::setDato(Contacto* _dato) {
	dato = _dato;
}

Contacto* Nodo::getDato() {
	return dato;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	siguiente = _siguiente;
}

Nodo* Nodo::getSiguiente() {
	return siguiente;
}

void Nodo::eliminarTodo() {
	if (siguiente)
	{
		siguiente->eliminarTodo();
		delete this;
	}
}
