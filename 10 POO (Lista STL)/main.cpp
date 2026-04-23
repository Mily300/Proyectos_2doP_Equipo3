#include <iostream>
#include "Lista.h"

int main() {
    Lista lista;

    lista.insertarFinal(10);
    lista.insertarFinal(20);
    lista.insertarInicio(5);

    lista.mostrar();

    if (lista.vacia()) {
        std::cout << "La lista está vacía\n";
    } else {
        std::cout << "La lista tiene elementos\n";
    }

    return 0;
}
