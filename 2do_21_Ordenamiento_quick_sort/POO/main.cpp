#include <iostream>
#include <string>
#include <cstdlib>
#include "PersonaPOO.h"

using namespace std;

void ordenarEnteros() {
    int n;
    cout << "\nCuantos enteros desea ingresar? ";
    cin >> n;
    int* datos = new int[n];       
    int** punteros = new int*[n];  
    for(int i = 0; i < n; i++) {
        cout << "Entero " << i + 1 << ": ";
        cin >> datos[i];
        punteros[i] = &datos[i]; 
    }
    quickSortIndirecto(punteros, 0, n - 1);
    cout << "\n[RESULTADO] Enteros ordenados: "; 
    imprimirArreglo(punteros, n);
    delete[] punteros; delete[] datos;
}

void ordenarCaracteres() {
    int n;
    cout << "\nCuantos caracteres desea ingresar? ";
    cin >> n;
    char* datos = new char[n];
    char** punteros = new char*[n];
    for(int i = 0; i < n; i++) {
        cout << "Caracter " << i + 1 << ": ";
        cin >> datos[i];
        punteros[i] = &datos[i];
    }
    quickSortIndirecto(punteros, 0, n - 1);
    cout << "\n[RESULTADO] Caracteres ordenados: "; 
    imprimirArreglo(punteros, n);
    delete[] punteros; delete[] datos;
}

void ordenarPersonasPOO() {
    int n;
    cout << "\nCuantas personas desea ingresar? ";
    cin >> n;
    PersonaPOO* datos = new PersonaPOO[n];
    PersonaPOO** punteros = new PersonaPOO*[n];
    for(int i = 0; i < n; i++) {
        string nom; int ed;
        cout << "Nombre de la persona " << i + 1 << ": ";
        cin >> nom;
        cout << "Edad de " << nom << ": ";
        cin >> ed;
        datos[i] = PersonaPOO(nom, ed); 
        punteros[i] = &datos[i]; 
    }
    quickSortIndirecto(punteros, 0, n - 1);
    cout << "\n[RESULTADO] Personas ordenadas por edad: \n"; 
    for(int i = 0; i < n; i++) cout << "- " << *punteros[i] << endl;
    delete[] punteros; delete[] datos;
}

int menu() {
    int opcion;
    system("cls");
    cout << "\nMenu Quick Sort Indirecto (POO)\n";
    cout << "\n1 - Ingresar y ordenar Enteros";
    cout << "\n2 - Ingresar y ordenar Caracteres";
    cout << "\n3 - Ingresar y ordenar Personas (Tipo Creado)";
    cout << "\n4 - Salir del menu\n";
    cout << "\nTeclee la opcion deseada : ";
    cin >> opcion;
    return opcion;
}

int main() {
    int opcion;
    
    for (int repeticion = 0; repeticion == 0; ) {
        opcion = menu(); 

        switch (opcion) {
            case 1:
                ordenarEnteros();
                break;
            case 2:
                ordenarCaracteres();
                break;
            case 3:
                ordenarPersonasPOO();
                break;
            case 4:
                cout << "\nHasta luego";
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