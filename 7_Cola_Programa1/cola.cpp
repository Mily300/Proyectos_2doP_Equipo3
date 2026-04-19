#include <iostream>
#include "cola.h"
using namespace std;

void inicializar(Cola &c) {
    c.frente = NULL;
    c.final = NULL;
}

void insertar(Cola &c, int valor) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = valor;
    nuevo->sig = NULL;

    if(c.frente == NULL) {
        c.frente = nuevo;
        c.final = nuevo;
    } else {
        c.final->sig = nuevo;
        c.final = nuevo;
    }
}

void eliminar(Cola &c) {
    if(c.frente != NULL) {
        Nodo* temp = c.frente;
        c.frente = c.frente->sig;
        delete temp;
    }
}

void mostrar(Cola c) {
    Nodo* aux = c.frente;
    while(aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->sig;
    }
    cout << endl;
}
