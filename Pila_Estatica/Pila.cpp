#include <iostream>
#include "pila.h"
using namespace std;

Pila::Pila() {
    tope = -1;
}

void Pila::push(int valor) {
    if (tope < 4) {
        tope++;
        datos[tope] = valor;
    } else {
        cout << "Pila llena\n";
    }
}

void Pila::pop() {
    if (tope >= 0) {
        tope--;
    } else {
        cout << "Pila vacia\n";
    }
}

void Pila::mostrar() {
    for (int i = tope; i >= 0; i--) {
        cout << datos[i] << endl;
    }
}
