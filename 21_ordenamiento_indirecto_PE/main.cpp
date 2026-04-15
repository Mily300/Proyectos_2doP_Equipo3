#include <iostream>
#include "quick.h"

using namespace std;

int main() {
    Persona personas[5] = {
        {"Juan", 25},
        {"Ana", 18},
        {"Luis", 30},
        {"Sofia", 20},
        {"Carlos", 28}
    };

    int idx[5];

    for (int i = 0; i < 5; i++) {
        idx[i] = i;
    }

    quickSort(personas, idx, 0, 4);

    cout << "Ordenado por edad (QuickSort PE):\n";
    for (int i = 0; i < 5; i++) {
        cout << personas[idx[i]].nombre
             << " - " << personas[idx[i]].edad << endl;
    }

    return 0;
}
