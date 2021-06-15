

#include <string>
#include <iostream>
#ifndef CONTACTO_H
#define CONTACTO_H
#pragma once
using namespace std;
class Contacto
{
public:
	Contacto();
	Contacto(string nombre, string apellido, string pais, string correoElectronico);
	void setNombre(string _nombre);
	string getNombre();
	void setApellido(string _apellido);
	string getApellido();
	void setPais(string _pais);
	string getPais();
	void setCorreo(string _correo);
	string getCorreo();
	void imprimirInfo();
private:
	string nombre;
	string apellido;
	string pais;
	string correoElectronico;
};

#endif // CONTACTO_H

