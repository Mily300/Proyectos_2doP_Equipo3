#include "Ordenamiento.h"

int main() {
    Ordenamiento ord;
    int arr[5] = {5,3,4,1,2};

    ord.imprimirArray(arr,5);
    ord.burbuja(arr,5);
    ord.imprimirArray(arr,5);

    return 0;
}
