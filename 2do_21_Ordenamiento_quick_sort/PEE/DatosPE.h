#ifndef DATOSPE_H
#define DATOSPE_H
#include <string>
#include <iostream>

using namespace std;

struct PersonaPE {
    string nombre;
    int edad;
};

void inicializarPersona(PersonaPE* p, string n, int e);
void imprimirPersona(PersonaPE* p);

inline bool esMenor(int* a, int* b) { return *a < *b; }
inline bool esMenor(char* a, char* b) { return *a < *b; }
inline bool esMenor(PersonaPE* a, PersonaPE* b) { return a->edad < b->edad; }

template <typename T>
int particion(T* arr[], int low, int high) {
    T* pivot = arr[high]; 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (esMenor(arr[j], pivot)) {
            i++;
            T* temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    T* temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    
    return (i + 1);
}

template <typename T>
void quickSortIndirecto(T* arr[], int low, int high) {
    if (low < high) {
        int pi = particion(arr, low, high);
        quickSortIndirecto(arr, low, pi - 1);
        quickSortIndirecto(arr, pi + 1, high);
    }
}

template <typename T>
void imprimirArreglo(T* arr[], int n) {
    for (int i = 0; i < n; i++) cout << *arr[i] << " | ";
    cout << endl;
}

#endif