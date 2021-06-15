// Ejercicio2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Lista.h"
#include "Contacto.h"
using namespace std;

void imprimirMenu() {
    cout << "\n----Menu del programa----\n";
    cout << "\n 1: Agregar un contacto a la lista \n";
    cout << "\n 2: Ver todos los contactos \n";
    cout << "\n 3: Salir del programa \n";

}

int leerOpcion() {
    int opcion;
    cout << "Selecciona una opcion: "; cin >> opcion;
    return opcion;

}


bool ejecutarOpcion(int opcion) {
    bool salir = false;
    string nombre, apellido, pais, correo;
    Lista* lista = new Lista();
    Contacto *contacto;
    switch (opcion) {
    case 1:
        cout << "***Agregar contacto a la lista***\n";
        cout << "Ingrese el nombre: "; cin >> nombre;
        cout << "Ingrese el apellido: "; cin >> apellido;
        cout << "Ingrese el pais: "; cin >> pais;
        cout << "Ingrese el correo electronico: "; cin >> correo;
        contacto = new Contacto(nombre, apellido, pais, correo);
        lista->agregarAlInicio(contacto);
        cout << "***Mostrar contactos de la lista***\n";
        lista->mostrarLista();
        break;
    case 2:
        cout << "***Mostrar contactos de la lista***\n";
        lista->mostrarLista();
        break;
    case 3:
        salir = true;

    default:
        cout << "Fin del programa";
        break;
    }

    return salir;
}

int main()
{
    bool salir = false;
    do
    {
        imprimirMenu();
        int opcion = leerOpcion();
        salir = ejecutarOpcion(opcion);

    } while (!salir);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
