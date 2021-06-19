#pragma once
#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <string>
class Lista
{
public:
	Lista();
	void setCabeza(Nodo *cabeza);
	Nodo* getCabeza();
	void setCabeza(int _size);
	void agregarAlInicio(int data);
	void agregarOrdenado(int data);
	void mostrarLista();
	void buscar(int _data);
	bool esVacia();
	void eliminar();
	void eliminarElemento(int pos);
	int size = 0;
private:
	Nodo *cabeza;
	
};

#endif // LISTA_H
