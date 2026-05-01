#include <iostream>
#include <cstdlib>
#include "ListaDinamica.h"

using namespace std;

void insertarElemento(ILista<int>* lista) {
    int numero;
    cout << "\nIngresa un numero entero a la lista: ";
    cin >> numero;
    lista->insertar(numero);
}

void mostrarLista(ILista<int>* lista) {
    cout << "\n";
    lista->mostrar();
}

void eliminarElemento(ILista<int>* lista) {
    cout << "\n";
    lista->eliminar();
}


int menu() {
    int opcion;
    system("cls");
    cout << "\nMenu Lista Dinamica (7 Bis)\n";
    cout << "\n1 - Insertar elemento al final";
    cout << "\n2 - Mostrar lista";
    cout << "\n3 - Eliminar elemento (inicio)";
    cout << "\n4 - Salir del menu\n";
    cout << "\nTeclee la opcion deseada : ";
    cin >> opcion;
    return opcion;
}


int main() {
    ILista<int>* miLista = new ListaDinamica<int>();
    int opcion;

    for (int repeticion = 0; repeticion == 0; ) {
        opcion = menu();

        switch (opcion) {
            case 1:
                insertarElemento(miLista);
                break;
            case 2:
                mostrarLista(miLista);
                break;
            case 3:
                eliminarElemento(miLista);
                break;
            case 4:
                cout << "\nHasta luego";
                delete miLista;
                repeticion++; 
                break;
            default:
                cout << "\nOpcion invalida";
        }

        cout << endl;
        if (opcion != 4) {
            system("pause");
        }
    }


    cout << endl;
    system("pause");
    return 0;
}