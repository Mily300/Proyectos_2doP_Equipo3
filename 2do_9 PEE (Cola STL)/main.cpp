#include "colaSTL.h"
#include <iostream>
using namespace std;

int main(){
    queue<int> q;
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

        switch(opcion){
            case 1:
                cout << "Valor: ";
                cin >> valor;
                encolar(q, valor);
                break;

            case 2:
                if(desencolar(q, valor))
                    cout << "Se saco: " << valor << endl;
                else
                    cout << "Cola vacia\n";
                break;

            case 3:
                if(!q.empty())
                    cout << "Frente: " << q.front() << endl;
                else
                    cout << "Cola vacia\n";
                break;

            case 4:
                if(q.empty())
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
