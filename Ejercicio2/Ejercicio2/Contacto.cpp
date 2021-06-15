#include "Contacto.h"

Contacto::Contacto() {

}

Contacto::Contacto(string _nombre, string _apellido, string _pais, string _correo) {
	nombre = _nombre;
	apellido = _apellido;
	pais = _pais;
	correoElectronico = _correo;
}

void Contacto::setNombre(string _nombre) {
	nombre = _nombre;
}

string Contacto::getNombre() {
	return nombre;
}

void Contacto::setApellido(string _apellido) {
	apellido = _apellido;
}

string Contacto::getApellido() {
	return apellido;
}


void Contacto::setPais(string _pais) {
	pais = _pais;
}

string Contacto::getPais() {
	return pais;
}


void Contacto::setCorreo(string _correo) {
	correoElectronico = _correo;
}

string Contacto::getCorreo() {
	return correoElectronico;
}

void Contacto::imprimirInfo() {
	cout << "Nombre: " << nombre << '\n';
	cout << "Apellido: " << apellido << '\n';
	cout << "Pais: " << pais << '\n';
	cout << "Correo electronico: " << correoElectronico << '\n';
}