#include <iostream>
#include "merge.h"

using namespace std;

int main() {
    Persona personas[3] = {
        {"Juan", 25},
        {"Ana", 18},
        {"Luis", 30}
    };

    int idx[3];

    for (int i = 0; i < 3; i++) {
        idx[i] = i;
    }

    mergeSort(personas, idx, 0, 2);

    cout << "Ordenado por edad:\n";
    for (int i = 0; i < 3; i++) {
        cout << personas[idx[i]].nombre
             << " - " << personas[idx[i]].edad << endl;
    }

    return 0;
}
