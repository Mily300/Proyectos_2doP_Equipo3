#include <iostream>
#include "ColaSTL.h"

int main() {
    ColaSTL cola;

    cola.encolar(10);
    cola.encolar(20);
    cola.encolar(30);

    std::cout << "Frente: " << cola.frente() << std::endl;

    int valor;

    while (cola.desencolar(valor)) {
        std::cout << "Desencolado: " << valor << std::endl;
    }

    if (cola.vacia()) {
        std::cout << "La cola está vacía" << std::endl;
    }

    return 0;
}
