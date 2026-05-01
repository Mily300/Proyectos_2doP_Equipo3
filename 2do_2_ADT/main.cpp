#include <iostream>
#include <cstdlib>
#include "AdtColeccion.h"

using namespace std;


void insertarElemento(ADT_Coleccion<int>* coleccion) {
    int numero;
    cout << "\nIngresa el numero entero a guardar: ";
    cin >> numero;
    coleccion->insertar(numero);
}

void mostrarColeccion(ADT_Coleccion<int>* coleccion) {
    cout << "\n";
    coleccion->mostrar();
}

void eliminarElemento(ADT_Coleccion<int>* coleccion) {
    cout << "\n";
    coleccion->eliminar();
}


int menu() {
    int opcion;
    system("cls");
    cout << "\nMenu ADT Coleccion\n";
    cout << "\n1 - Insertar un numero";
    cout << "\n2 - Mostrar la coleccion";
    cout << "\n3 - Eliminar el ultimo elemento";
    cout << "\n4 - Salir del menu\n";
    cout << "\nTeclee la opcion deseada : ";
    cin >> opcion;
    return opcion;
}


int main() {
    ADT_Coleccion<int>* miColeccion = new ColeccionArreglo<int>(5);
    int opcion;

    for (int repeticion = 0; repeticion == 0; ) {
        opcion = menu();

        switch (opcion) {
            case 1:
                insertarElemento(miColeccion);
                break;
            case 2:
                mostrarColeccion(miColeccion);
                break;
            case 3:
                eliminarElemento(miColeccion);
                break;
            case 4:
                cout << "\nHasta luego";
                delete miColeccion;
                repeticion++; 
                break;
            default:
                cout << "\nOpcion invalida";
        }

        cout << endl;
        if (opcion != 4) {
            system("pause");
        }
    }

    cout << endl;
    system("pause");
    return 0;
}