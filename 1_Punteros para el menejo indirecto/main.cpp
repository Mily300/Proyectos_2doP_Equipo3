#include <iostream>
#include <string>
#include <cstdlib>
#include "Nodo.h"

using namespace std;

int main() {
    Nodo* inicio = NULL;
    Nodo* actual = NULL;
    int opcion;
    string info;

    do {
        system("cls");

        cout << "PUNTEROS PARA EL MANEJO INDIRECTO CON CLASES Y ESTRUCTURAS" << endl;
        cout << "\n MENU\n"<< endl;
        cout << "1. Agregar un nuevo eslabon (Nodo)" << endl;
        cout << "2. Mostrar toda la cadena unida" << endl;
        cout << "3. Salir" << endl;
        cout << "\nElige una opcion: ";
        cin >> opcion;
        
        cout << "\n------------------------\n";

        switch(opcion) {
            case 1: {
                cout << "Ingresa una sola palabra para guardar en el nodo: ";
                cin >> info; 
                
                Nodo* nuevoNodo = new Nodo(info);
                
                if (inicio == NULL) {
                    inicio = nuevoNodo;
                    actual = nuevoNodo;
                } else {
                    actual->setSiguiente(nuevoNodo);
                    actual = nuevoNodo;
                }
                cout << ">> Nodo agregado exitosamente en memoria." << endl;
                break;
            }
            case 2: {
                if (inicio == NULL) {
                    cout << ">> La cadena esta vacia. Agrega un nodo primero." << endl;
                } else {
                    cout << "\nRecorriendo los punteros en memoria:\n[INICIO] -> ";
                    Nodo* temporal = inicio;
                    while (temporal != NULL) {
                        cout << "[ " << temporal->getInformacion() << " ] -> ";
                        temporal = temporal->getSiguiente();
                    }
                    cout << "NULL" << endl;
                }
                break;
            }
            case 3:
                cout << "Saliendo y liberando memoria..." << endl;
                break;
                
            default:
                cout << "Opcion invalida." << endl;
        }

        if (opcion != 3) {
            cout << "\n";
            system("pause"); 
        }

    } while(opcion != 3);

    Nodo* temporal;
    while(inicio != NULL) {
        temporal = inicio;
        inicio = inicio->getSiguiente();
        delete temporal;
    }

    return 0;
}