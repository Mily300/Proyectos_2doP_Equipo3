#include <iostream>
#include "cola_ref.h"
using namespace std;

void inicializarR(ColaR &c) {
    c.frente = NULL;
    c.final = NULL;
}

void insertarR(ColaR &c, int &valor) {
    NodoR* nuevo = new NodoR();
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

void eliminarR(ColaR &c) {
    if(c.frente != NULL) {
        NodoR* temp = c.frente;
        c.frente = c.frente->sig;
        delete temp;
    }
}

void mostrarR(ColaR &c) {
    NodoR* aux = c.frente;
    while(aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->sig;
    }
    cout << endl;
}
