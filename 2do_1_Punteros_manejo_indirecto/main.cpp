#include <iostream>
#include <string>
#include <cstdlib>
#include "Nodo.h"

using namespace std;


void capturaNodo(Nodo*& inicio, Nodo*& actual) {
    string info;
    cout << "\nIngresa una sola palabra para guardar en el nodo: ";
    cin >> info;
    agregarNodo(inicio, actual, info); 
}

void impresion(Nodo* inicio) {
    mostrarNodos(inicio); 
}

void liberarMemoria(Nodo*& inicio) {
    Nodo* temporal;
    while(inicio != NULL) {
        temporal = inicio;
        inicio = inicio->getSiguiente();
        delete temporal;
    }
}


int menu() {
    int opcion;
    system("cls");
    cout << "\nMenu \n";
    cout << "\n1 - Agregar un nuevo eslabon (Nodo)";
    cout << "\n2 - Mostrar toda la cadena unida";
    cout << "\n3 - Salir del menu\n";
    cout << "\nTeclee la opcion deseada: ";
    cin >> opcion;
    return opcion;
}


int main() {
    Nodo* inicio = NULL;
    Nodo* actual = NULL;
    int opcion;

    for (int repeticion = 0; repeticion == 0; ) {
        opcion = menu(); 

        switch (opcion) {
            case 1:
                capturaNodo(inicio, actual);
                break;
            case 2:
                impresion(inicio);
                break;
            case 3:
                cout << "\nHasta luego";
                liberarMemoria(inicio);
                repeticion++;
                break;
            default:
                cout << "\nOpcion invalida";
        }
        
        cout << endl;
        if (opcion != 3) {
            system("pause");
        }
    }

    cout << endl;
    system("pause");
    return 0;
}