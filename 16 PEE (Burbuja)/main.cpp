#include "burbuja.h"
#include <iostream>

int main() {
    int arr[5] = {5,3,4,1,2};
    imprimirArray(arr,5);
    bubbleSort(arr,5);
    imprimirArray(arr,5);
}
