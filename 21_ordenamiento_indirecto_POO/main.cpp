#include <iostream>
#include "quick.h"

using namespace std;

int main() {
    Persona personas[5] = {
        Persona("Juan", 25),
        Persona("Ana", 18),
        Persona("Luis", 30),
        Persona("Sofia", 20),
        Persona("Carlos", 28)
    };

    int idx[5];

    for (int i = 0; i < 5; i++) {
        idx[i] = i;
    }

    quickSort(personas, idx, 0, 4);

    cout << "Ordenado por edad (QuickSort):\n";
    for (int i = 0; i < 5; i++) {
        cout << personas[idx[i]].getNombre()
             << " - " << personas[idx[i]].getEdad() << endl;
    }

    return 0;
}
