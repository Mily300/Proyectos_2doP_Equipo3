#include <iostream>
#include "Pila.h"

int main() {
    Pila pila;

    pila.apilar(10);
    pila.apilar(20);

    int valor;

    if (pila.desapilar(valor)) {
        std::cout << "Valor sacado: " << valor << std::endl;
    }

    if (!pila.vacia()) {
        std::cout << "Cima: " << pila.cima() << std::endl;
    }

    return 0;
}
