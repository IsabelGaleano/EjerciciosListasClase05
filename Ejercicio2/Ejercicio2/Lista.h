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
	bool esVacia();
	void buscar(string correo);
	void eliminar();
	void eliminarElemento(int pos);
	int size = 0;
private:
	Nodo* cabeza;
};

#endif // LISTA_H
