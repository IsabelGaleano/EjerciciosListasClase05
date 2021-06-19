// Ejercicio1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <string>
#include "Lista.h"
#include <string>
#include <iostream>
using namespace std;


void imprimirMenu() {
    cout << "\n----Menu del programa----\n";
    cout << "\n 1: Agregar al inicio \n";
    cout << "\n 2: Agregar ordenado \n";
    cout << "\n 3: Mostar lista \n";
    cout << "\n 4: Verificar si la lista es vacia \n";
    cout << "\n 5: Longitud de la lista \n";
    cout << "\n 6: Buscar un elemento \n";
    cout << "\n 7: Eliminar Lista \n";
    cout << "\n 8: Eliminar elemento \n";
    cout << "\n 9: Salir del programa \n";

}

int leerOpcion() {
    int opcion;
    cout << "Selecciona una opcion: "; cin >> opcion;
    return opcion;

}


bool ejecutarOpcion(int opcion, Lista* lista) {
    bool salir = false;
    int numero;
    string info;
    switch (opcion) {
    case 1:
        cout << "***Agregar al inicio***\n";
        cout << "Ingrese un numero: "; cin >> numero;
        lista->agregarAlInicio(numero);
        break;
    case 2:
        cout << "***Agregar ordenado***\n";
        cout << "Ingrese un numero: "; cin >> numero;
        lista->agregarOrdenado(numero);
        break;
    case 3:
        cout << "***Mostrar lista***\n";
        lista->mostrarLista();
        break;
    case 4:
        if (lista->esVacia() == true)
        {
            cout << "La lista está vacia" << endl;
        }
        else
        {
            cout << "La lista no está vacia" << endl;
        }
        break;

    case 5:
        cout << "La longitud de la lista es: " << lista->size;
        break;
    case 6:
        cout << "Ingrese el numero que desea averiguar: "; cin >> numero;
        lista->buscar(numero);
        break;

    case 7:
        lista->eliminar();
        cout << "Lista eliminada" << endl;
        break;

    case 8:
        cout << "Ingrese la posicion del elemento que desea eliminar: "; cin >> numero;
        lista->eliminarElemento(numero);
        cout << "Elemento eliminado";
        break;
    case 9:
        salir = true;

    default:
        cout << "Fin del programa";
        break;
    }

    return salir;
}


int main()
{
    Lista* lista = new Lista();
    bool salir = false;
    do
    {
        imprimirMenu();
        int opcion = leerOpcion();
        salir = ejecutarOpcion(opcion, lista);

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
