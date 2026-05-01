#include <iostream>
#include <string>
#include "DatosPE.h"

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

void ordenarPersonasPE() {
    int n;
    cout << "\nCuantas personas desea ingresar? ";
    cin >> n;
    
    PersonaPE* datos = new PersonaPE[n];
    PersonaPE** punteros = new PersonaPE*[n];
    
    for(int i = 0; i < n; i++) {
        string nom; 
        int ed;
        cout << "Nombre de la persona " << i + 1 << ": ";
        cin >> nom;
        cout << "Edad de " << nom << ": ";
        cin >> ed;
        
        inicializarPersona(&datos[i], nom, ed); 
        punteros[i] = &datos[i]; 
    }
    
    quickSortIndirecto(punteros, 0, n - 1);
    
    cout << "\n[RESULTADO] Personas ordenadas por edad: \n"; 
    for(int i = 0; i < n; i++) {
        cout << "- ";
        imprimirPersona(punteros[i]); 
        cout << endl;
    }
    
    delete[] punteros; delete[] datos;
}

void ejecutarMenu() {
    int opcion;
    do {
        cout << "ORDENAMIENTO INDIRECTO QUICK SORT (PE)" << endl;
        cout << "1. Ingresar y ordenar Enteros" << endl;
        cout << "2. Ingresar y ordenar Caracteres" << endl;
        cout << "3. Ingresar y ordenar Personas (Tipo Creado PE)" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: ordenarEnteros(); break;
            case 2: ordenarCaracteres(); break;
            case 3: ordenarPersonasPE(); break;
            case 4: cout << "\nLiberando memoria y saliendo del programa..." << endl; break;
            default: cout << "\n[Error] Opcion invalida. Intente nuevamente." << endl;
        }
    } while(opcion != 4);
}

int main() {
    ejecutarMenu();
    return 0;
}