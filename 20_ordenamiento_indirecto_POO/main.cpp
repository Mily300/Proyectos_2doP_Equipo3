#include <iostream>
#include "merge.h"

using namespace std;

int main() {
    Persona personas[3] = {
        Persona("Juan", 25),
        Persona("Andrea", 18),
        Persona("Ximena", 30)
    };

    int idx[3];

    for (int i = 0; i < 3; i++) {
        idx[i] = i;
    }

    mergeSort(personas, idx, 0, 2);

    cout << "Ordenado por edad:\n";
    for (int i = 0; i < 3; i++) {
        cout << personas[idx[i]].getNombre()
             << " - " << personas[idx[i]].getEdad() << endl;
    }

    return 0;
}
