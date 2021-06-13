#pragma once
#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
class Lista
{
public:
	Lista();
	void setCabeza(Nodo *cabeza);
	Nodo* getCabeza();
	void agregarAlInicio(int data);
	void MostrarLista();
private:
	Nodo *cabeza;
};

#endif // LISTA_H
