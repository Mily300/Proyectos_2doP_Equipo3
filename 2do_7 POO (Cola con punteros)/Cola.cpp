#include <cstddef>
#include "Cola.h"

Cola::Cola() {
    frente = NULL;
    fondo = NULL;
}

void Cola::encolar(int valor) {
    Nodo* nuevo = new Nodo;
    nuevo->dato = valor;
    nuevo->sig = NULL;

    if (fondo == NULL) {
        frente = nuevo;
        fondo = nuevo;
    } else {
        fondo->sig = nuevo;
        fondo = nuevo;
    }
}

bool Cola::desencolar(int &valor) {
    if (frente == NULL) {
        return false;
    }

    Nodo* temp = frente;
    valor = temp->dato;
    frente = frente->sig;

    if (frente == NULL) {
        fondo = NULL;
    }

    delete temp;
    return true;
}
