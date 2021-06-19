#pragma once
#ifndef NODO_H
#define NODO_H
#include "Contacto.h"
class Nodo
{

public:
	Nodo();
	Nodo(Contacto* dato);
	void setDato(Contacto* dato);
	Contacto* getDato();
	void setSiguiente(Nodo* siguiente);
	Nodo* getSiguiente();
	void eliminarTodo();
private:
	Nodo* siguiente;
	Contacto* dato;
};

#endif // NODO_H

