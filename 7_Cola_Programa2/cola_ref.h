#ifndef COLA_REF_H
#define COLA_REF_H

struct NodoR {
    int dato;
    NodoR* sig;
};

struct ColaR {
    NodoR* frente;
    NodoR* final;
};

void inicializarR(ColaR &c);
void insertarR(ColaR &c, int &valor);
void eliminarR(ColaR &c);
void mostrarR(ColaR &c);

#endif
