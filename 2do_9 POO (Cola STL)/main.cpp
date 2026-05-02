#include <iostream>
#include "ColaSTL.h"
using namespace std;

int main() {
    ColaSTL cola;
    int opcion, valor;

    do {
        cout << "\n--- MENU COLA STL ---\n";
        cout << "1. Encolar\n";
        cout << "2. Desencolar\n";
        cout << "3. Ver frente\n";
        cout << "4. Ver si esta vacia\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingresa valor: ";
                cin >> valor;
                cola.encolar(valor);
                break;

            case 2:
                if (cola.desencolar(valor))
                    cout << "Desencolado: " << valor << endl;
                else
                    cout << "Cola vacia\n";
                break;

            case 3:
                if (!cola.vacia())
                    cout << "Frente: " << cola.frente() << endl;
                else
                    cout << "Cola vacia\n";
                break;

            case 4:
                if (cola.vacia())
                    cout << "Cola vacia\n";
                else
                    cout << "Cola con elementos\n";
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
