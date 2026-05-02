#include "DatosPE.h"

using namespace std;

void inicializarPersona(PersonaPE* p, string n, int e) {
    p->nombre = n;
    p->edad = e;
}

void imprimirPersona(PersonaPE* p) {
    cout << "Nombre: " << p->nombre << " | Edad: " << p->edad << " anos";
}

bool compararInt(int* a, int* b) { return *a <= *b; }
bool compararChar(char* a, char* b) { return *a <= *b; }
bool compararPersona(PersonaPE* a, PersonaPE* b) { return a->edad <= b->edad; }

void mergeIndirectoInt(int* arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int** L = new int*[n1];
    int** R = new int*[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (compararInt(L[i], R[j])) { arr[k] = L[i]; i++; } 
        else { arr[k] = R[j]; j++; }
        k++;
    }
    while (i < n1) { arr[k] = L[i]; i++; k++; }
    while (j < n2) { arr[k] = R[j]; j++; k++; }
    
    delete[] L; delete[] R;
}

void mergeSortInt(int* arr[], int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSortInt(arr, left, mid);
    mergeSortInt(arr, mid + 1, right);
    mergeIndirectoInt(arr, left, mid, right);
}

void mergeIndirectoChar(char* arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    char** L = new char*[n1];
    char** R = new char*[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (compararChar(L[i], R[j])) { arr[k] = L[i]; i++; } 
        else { arr[k] = R[j]; j++; }
        k++;
    }
    while (i < n1) { arr[k] = L[i]; i++; k++; }
    while (j < n2) { arr[k] = R[j]; j++; k++; }
    
    delete[] L; delete[] R;
}

void mergeSortChar(char* arr[], int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSortChar(arr, left, mid);
    mergeSortChar(arr, mid + 1, right);
    mergeIndirectoChar(arr, left, mid, right);
}

void mergeIndirectoPersona(PersonaPE* arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    PersonaPE** L = new PersonaPE*[n1];
    PersonaPE** R = new PersonaPE*[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (compararPersona(L[i], R[j])) { arr[k] = L[i]; i++; } 
        else { arr[k] = R[j]; j++; }
        k++;
    }
    while (i < n1) { arr[k] = L[i]; i++; k++; }
    while (j < n2) { arr[k] = R[j]; j++; k++; }
    
    delete[] L; delete[] R;
}

void mergeSortPersona(PersonaPE* arr[], int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSortPersona(arr, left, mid);
    mergeSortPersona(arr, mid + 1, right);
    mergeIndirectoPersona(arr, left, mid, right);
}