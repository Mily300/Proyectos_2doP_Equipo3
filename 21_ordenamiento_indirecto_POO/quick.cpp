#include "quick.h"

int partition(Persona arr[], int idx[], int low, int high) {
    int pivot = arr[idx[high]].getEdad();
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[idx[j]].getEdad() < pivot) {
            i++;
            int temp = idx[i];
            idx[i] = idx[j];
            idx[j] = temp;
        }
    }

    int temp = idx[i + 1];
    idx[i + 1] = idx[high];
    idx[high] = temp;

    return i + 1;
}

void quickSort(Persona arr[], int idx[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, idx, low, high);

        quickSort(arr, idx, low, pi - 1);
        quickSort(arr, idx, pi + 1, high);
    }
}
