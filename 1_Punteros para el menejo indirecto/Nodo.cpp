#include "Nodo.h"
#include <cstddef>

Nodo::Nodo(string info) {
    informacion = info;
    siguiente = NULL;
}

void Nodo::setSiguiente(Nodo* sig) {
    siguiente = sig;
}

Nodo* Nodo::getSiguiente() const {
    return siguiente;
}

string Nodo::getInformacion() const {
    return informacion;
}