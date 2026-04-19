#include "ordenamiento.h"

//  _______ENTEROS _______
void mergeInt(int arr[], int inicio, int medio, int fin) {
    int temp[100];
    int i = inicio, j = medio + 1, k = 0;

    while(i <= medio && j <= fin) {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= medio) temp[k++] = arr[i++];
    while(j <= fin) temp[k++] = arr[j++];

    for(int x = 0; x < k; x++)
        arr[inicio + x] = temp[x];
}

void mergeSortInt(int arr[], int inicio, int fin) {
    if(inicio < fin) {
        int medio = (inicio + fin) / 2;
        mergeSortInt(arr, inicio, medio);
        mergeSortInt(arr, medio + 1, fin);
        mergeInt(arr, inicio, medio, fin);
    }
}

//  _______CARACTERES _______
void mergeChar(char arr[], int inicio, int medio, int fin) {
    char temp[100];
    int i = inicio, j = medio + 1, k = 0;

    while(i <= medio && j <= fin) {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= medio) temp[k++] = arr[i++];
    while(j <= fin) temp[k++] = arr[j++];

    for(int x = 0; x < k; x++)
        arr[inicio + x] = temp[x];
}

void mergeSortChar(char arr[], int inicio, int fin) {
    if(inicio < fin) {
        int medio = (inicio + fin) / 2;
        mergeSortChar(arr, inicio, medio);
        mergeSortChar(arr, medio + 1, fin);
        mergeChar(arr, inicio, medio, fin);
    }
}

// _______PERSONA _______
void mergePersona(Persona arr[], int inicio, int medio, int fin) {
    Persona temp[100];
    int i = inicio, j = medio + 1, k = 0;

    while(i <= medio && j <= fin) {
        if(arr[i].edad < arr[j].edad)
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= medio) temp[k++] = arr[i++];
    while(j <= fin) temp[k++] = arr[j++];

    for(int x = 0; x < k; x++)
        arr[inicio + x] = temp[x];
}

void mergeSortPersona(Persona arr[], int inicio, int fin) {
    if(inicio < fin) {
        int medio = (inicio + fin) / 2;
        mergeSortPersona(arr, inicio, medio);
        mergeSortPersona(arr, medio + 1, fin);
        mergePersona(arr, inicio, medio, fin);
    }
}
