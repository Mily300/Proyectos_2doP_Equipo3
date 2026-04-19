#include "MergeSort.h"

void merge(int arr[], int inicio, int medio, int fin) {
    int temp[100];
    int i = inicio, j = medio+1, k=0;

    while(i<=medio && j<=fin) {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i<=medio) temp[k++] = arr[i++];
    while(j<=fin) temp[k++] = arr[j++];

    for(int x=0;x<k;x++)
        arr[inicio+x] = temp[x];
}

void MergeSort::ordenar(int arr[], int inicio, int fin) {
    if(inicio < fin) {
        int medio = (inicio+fin)/2;
        ordenar(arr, inicio, medio);
        ordenar(arr, medio+1, fin);
        merge(arr, inicio, medio, fin);
    }
}
