#include "merge.h"
#include <iostream>
using namespace std;

int main(){
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
        cout << "\n--- MENU MERGE SORT ---\n";
        cout << "1. Mostrar arreglo\n";
        cout << "2. Ordenar (MergeSort)\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout << "Arreglo: ";
                for(int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                mergeSort(arr, 0, n - 1);
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
