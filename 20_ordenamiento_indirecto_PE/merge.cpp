#include "merge.h"

void merge(Persona arr[], int idx[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    int temp[100];

    while (i <= mid && j <= right) {
        if (arr[idx[i]].edad <= arr[idx[j]].edad) {
            temp[k++] = idx[i++];
        } else {
            temp[k++] = idx[j++];
        }
    }

    while (i <= mid) temp[k++] = idx[i++];
    while (j <= right) temp[k++] = idx[j++];

    for (int x = 0; x < k; x++) {
        idx[left + x] = temp[x];
    }
}

void mergeSort(Persona arr[], int idx[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, idx, left, mid);
        mergeSort(arr, idx, mid + 1, right);

        merge(arr, idx, left, mid, right);
    }
}
