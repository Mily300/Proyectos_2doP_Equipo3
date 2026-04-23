#include "Lista.h"
#include <iostream>

void Lista::insertarFinal(int valor) {
    lst.push_back(valor);
}

void Lista::insertarInicio(int valor) {
    lst.push_front(valor);
}

void Lista::mostrar() const {
    if (lst.empty()) {
        std::cout << "La lista está vacía\n";
        return;
    }

    std::cout << "Lista: ";

    std::list<int>::const_iterator it = lst.begin();
    while (it != lst.end()) {
        std::cout << *it << " ";
        ++it;
    }

    std::cout << std::endl;
}

bool Lista::vacia() const {
    return lst.empty();
}
