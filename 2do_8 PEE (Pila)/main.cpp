#include "pila.h"
#include <iostream>
using namespace std;

int main(){
    stack<int> s;
    int opcion, valor;

    do {
        cout << "\n--- MENU PILA ---\n";
        cout << "1. Push (insertar)\n";
        cout << "2. Pop (eliminar)\n";
        cout << "3. Ver tope\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout << "Valor: ";
                cin >> valor;
                push(s, valor);
                break;

            case 2:
                if(pop(s, valor))
                    cout << "Se saco: " << valor << endl;
                else
                    cout << "Pila vacia\n";
                break;

            case 3:
                if(!s.empty())
                    cout << "Tope: " << s.top() << endl;
                else
                    cout << "Pila vacia\n";
                break;

            case 4:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

    } while(opcion != 4);

    return 0;
}
