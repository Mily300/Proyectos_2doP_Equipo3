#include <iostream>
#include "MergeSort.h"
using namespace std;

int main() {
    int arr[5] = {8,4,6,2,1};

    MergeSort m;
    m.ordenar(arr, 0, 4);

    cout << "Ordenado: ";
    for(int i=0;i<5;i++)
        cout << arr[i] << " ";

    return 0;
}
