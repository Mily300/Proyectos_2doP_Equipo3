#include "DatosPE.h"

using namespace std;

void inicializarPersona(PersonaPE* p, string n, int e) {
    p->nombre = n;
    p->edad = e;
}

void imprimirPersona(PersonaPE* p) {
    cout << "Nombre: " << p->nombre << " | Edad: " << p->edad << " anos";
}

bool esMenorInt(int* a, int* b) { return *a < *b; }
bool esMenorChar(char* a, char* b) { return *a < *b; }
bool esMenorPersona(PersonaPE* a, PersonaPE* b) { return a->edad < b->edad; }

int particionInt(int* arr[], int low, int high) {
    int* pivot = arr[high]; 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (esMenorInt(arr[j], pivot)) {
            i++;
            int* temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int* temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    
    return (i + 1);
}

void quickSortIndirectoInt(int* arr[], int low, int high) {
    if (low < high) {
        int pi = particionInt(arr, low, high);
        quickSortIndirectoInt(arr, low, pi - 1);
        quickSortIndirectoInt(arr, pi + 1, high);
    }
}

void imprimirArregloInt(int* arr[], int n) {
    for (int i = 0; i < n; i++) cout << *arr[i] << " | ";
    cout << endl;
}

int particionChar(char* arr[], int low, int high) {
    char* pivot = arr[high]; 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (esMenorChar(arr[j], pivot)) {
            i++;
            char* temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    char* temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    
    return (i + 1);
}

void quickSortIndirectoChar(char* arr[], int low, int high) {
    if (low < high) {
        int pi = particionChar(arr, low, high);
        quickSortIndirectoChar(arr, low, pi - 1);
        quickSortIndirectoChar(arr, pi + 1, high);
    }
}

void imprimirArregloChar(char* arr[], int n) {
    for (int i = 0; i < n; i++) cout << *arr[i] << " | ";
    cout << endl;
}

int particionPersona(PersonaPE* arr[], int low, int high) {
    PersonaPE* pivot = arr[high]; 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (esMenorPersona(arr[j], pivot)) {
            i++;
            PersonaPE* temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    PersonaPE* temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    
    return (i + 1);
}

void quickSortIndirectoPersona(PersonaPE* arr[], int low, int high) {
    if (low < high) {
        int pi = particionPersona(arr, low, high);
        quickSortIndirectoPersona(arr, low, pi - 1);
        quickSortIndirectoPersona(arr, pi + 1, high);
    }
}