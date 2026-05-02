#include "Ordenamiento.h"
#include <iostream>
using namespace std;

int main() {
    Ordenamiento ord;
    int n;

    cout << "Cantidad de elementos: ";
    cin >> n;

    int arr[100]; 

    for(int i = 0; i < n; i++){
        cout << "Elemento [" << i << "]: ";
        cin >> arr[i];
    }

    int opcion;

    do {
        cout << "\n--- MENU ORDENAMIENTO ---\n";
        cout << "1. Mostrar arreglo\n";
        cout << "2. Ordenar (Burbuja)\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout << "Arreglo: ";
                ord.imprimirArray(arr, n);
                break;

            case 2:
                ord.burbuja(arr, n);
                cout << "Arreglo ordenado\n";
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
