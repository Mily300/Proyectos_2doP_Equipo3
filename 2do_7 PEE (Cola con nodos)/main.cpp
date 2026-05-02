#include <iostream>
#include "cola.h"
using namespace std;

int main(){
    Cola c;
    inicializar(c);

    int opcion, valor;

    do {
        cout << "\n--- MENU COLA (STRUCT) ---\n";
        cout << "1. Encolar\n";
        cout << "2. Desencolar\n";
        cout << "3. Ver si esta vacia\n";
        cout << "4. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout << "Ingresa valor: ";
                cin >> valor;
                if(encolar(c, valor))
                    cout << "Elemento encolado\n";
                else
                    cout << "Cola llena\n";
                break;

            case 2:
                if(desencolar(c, valor))
                    cout << "Desencolado: " << valor << endl;
                else
                    cout << "Cola vacia\n";
                break;

            case 3:
                if(vacia(c))
                    cout << "La cola esta vacia\n";
                else
                    cout << "La cola tiene elementos\n";
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
