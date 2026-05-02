#include <iostream>
#include "Cola.h"
using namespace std;

int main() {
    Cola c;
    int opcion, valor;

    do {
        cout << "\n--- MENU COLA ---\n";
        cout << "1. Encolar\n";
        cout << "2. Desencolar\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingresa valor: ";
                cin >> valor;
                c.encolar(valor);
                break;

            case 2:
                if (c.desencolar(valor))
                    cout << "Desencolado: " << valor << endl;
                else
                    cout << "Cola vacia\n";
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
