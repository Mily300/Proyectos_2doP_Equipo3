#include <iostream>
#include "Pila.h"
using namespace std;

int main() {
    Pila pila;
    int opcion, valor;

    do {
        cout << "\n--- MENU PILA ---\n";
        cout << "1. Apilar\n";
        cout << "2. Desapilar\n";
        cout << "3. Ver cima\n";
        cout << "4. Ver si esta vacia\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingresa valor: ";
                cin >> valor;
                pila.apilar(valor);
                break;

            case 2:
                if (pila.desapilar(valor))
                    cout << "Valor sacado: " << valor << endl;
                else
                    cout << "Pila vacia\n";
                break;

            case 3:
                if (!pila.vacia())
                    cout << "Cima: " << pila.cima() << endl;
                else
                    cout << "Pila vacia\n";
                break;

            case 4:
                if (pila.vacia())
                    cout << "Pila vacia\n";
                else
                    cout << "Pila con elementos\n";
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
