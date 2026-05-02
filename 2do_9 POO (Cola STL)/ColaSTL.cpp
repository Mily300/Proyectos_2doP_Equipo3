#include "ColaSTL.h"
#include <iostream>

void ColaSTL::encolar(int valor) {
    q.push(valor);
}

bool ColaSTL::desencolar(int &valor) {
    if (q.empty()) return false;
    valor = q.front();
    q.pop();
    return true;
}

bool ColaSTL::vacia() const {
    return q.empty();
}

int ColaSTL::frente() const {
    if (q.empty()) {
        std::cerr << "Error: cola vacía\n";
        return 0;
    }
    return q.front();
}
