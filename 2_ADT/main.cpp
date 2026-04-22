#include <iostream>
#include <cstdlib>
#include "AdtColeccion.h"

using namespace std;

int main() {
    ADT_Coleccion<int>* miColeccion = new ColeccionArreglo<int>(5);
    int opcion, numero;

    do {
        system("cls"); 

        cout << "ADT" << endl;
        cout << "\nMENU PRINCIPAL\n" << endl;
        cout << "1. Insertar un numero" << endl;
        cout << "2. Mostrar la coleccion" << endl;
        cout << "3. Eliminar el ultimo elemento" << endl;
        cout << "4. Salir" << endl;
        cout << "\nElige una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingresa el numero entero a guardar: ";
                cin >> numero;
                miColeccion->insertar(numero);
                break;
                
            case 2:
                miColeccion->mostrar();
                break;
                
            case 3:
                miColeccion->eliminar();
                break;
                
            case 4:
                cout << "Liberando memoria y saliendo..." << endl;
                break;
                
            default:
                cout << "Opcion no valida. Por favor intenta de nuevo." << endl;
        }

        if (opcion != 4) {
            cout << "\n";
            system("pause");
        }

    } while(opcion != 4);

    delete miColeccion;

    return 0;
}