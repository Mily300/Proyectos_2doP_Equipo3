#include <iostream>
#include "cola.h"
using namespace std;

Cola::Cola() {
    inicio = 0;
    fin = -1;
}

void Cola::encolar(int valor) {
    if (fin < 4) {
        fin++;
        datos[fin] = valor;
    } else {
        cout << "Cola llena\n";
    }
}

void Cola::desencolar() {
    if (inicio <= fin) {
        inicio++;
    } else {
        cout << "Cola vacia\n";
    }
}

void Cola::mostrar() {
    if (inicio > fin) {
        cout << "Cola vacia\n";
        return;
    }

    for (int i = inicio; i <= fin; i++) {
        cout << datos[i] << endl;
    }
}
