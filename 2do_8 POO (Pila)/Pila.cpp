#include "Pila.h"
#include <iostream>

void Pila::apilar(int valor) {
    s.push(valor);
}

bool Pila::desapilar(int &valor) {
    if (s.empty()) return false;
    valor = s.top();
    s.pop();
    return true;
}

bool Pila::vacia() const {
    return s.empty();
}

int Pila::cima() const {
    if (s.empty()) {
        std::cerr << "Error: pila vacía\n";
        return 0;
    }
    return s.top();
}
