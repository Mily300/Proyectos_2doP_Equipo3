#include <iostream>
#include "lista.h"
using namespace std;

Lista::Lista() {
    n = 0;
}

void Lista::agregar(int valor) {
    if (n < 5) {
        datos[n] = valor;
        n++;
    } else {
        cout << "Lista llena\n";
    }
}

void Lista::mostrar() {
    for (int i = 0; i < n; i++) {
        cout << datos[i] << endl;
    }
}
