#pragma once
#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include "Contacto.h"
class Lista
{
public:
	Lista();
	void setCabeza(Nodo* cabeza);
	Nodo* getCabeza();
	void agregarAlInicio(Contacto* data);
	void mostrarLista();
private:
	Nodo* cabeza;
};

#endif // LISTA_H
