#pragma once
#ifndef NODO_H
#define NODO_H
class Nodo
{

public:
	Nodo();
	Nodo(int dato);
	void setDato(int dato);
	int getDato();
	void setSiguiente(Nodo *siguiente);
	Nodo* getSiguiente();
private:
	Nodo *siguiente;
	int dato;
};

#endif // NODO_H

