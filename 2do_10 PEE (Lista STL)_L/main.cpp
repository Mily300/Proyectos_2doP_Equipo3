#include <iostream>
#include <list>
#include "lista.h"
using namespace std;

int main(){
    list<int> l;
    int opcion, valor;

    do {
        cout << "\n--- MENU LISTA STL ---\n";
        cout << "1. Insertar\n";
        cout << "2. Mostrar\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout << "Valor: ";
                cin >> valor;
                insertar(l, valor);
                break;

            case 2:
                cout << "Lista: ";
                mostrar(l);
                cout << endl;
                break;

            case 3:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

    } while(opcion != 3);

    return 0;
}
