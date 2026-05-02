#include <iostream>
#include "Lista.h"
using namespace std;

int main() {
    Lista lista;
    int opcion, valor;

    do {
        cout << "\n--- MENU LISTA STL (POO) ---\n";
        cout << "1. Insertar al inicio\n";
        cout << "2. Insertar al final\n";
        cout << "3. Mostrar lista\n";
        cout << "4. Ver si esta vacia\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Valor: ";
                cin >> valor;
                lista.insertarInicio(valor);
                break;

            case 2:
                cout << "Valor: ";
                cin >> valor;
                lista.insertarFinal(valor);
                break;

            case 3:
                lista.mostrar();
                break;

            case 4:
                if (lista.vacia())
                    cout << "La lista esta vacia\n";
                else
                    cout << "La lista tiene elementos\n";
                break;

            case 5:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

    } while(opcion != 5);

    return 0;
}
