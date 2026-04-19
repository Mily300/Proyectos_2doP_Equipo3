#ifndef COLA_H
#define COLA_H

struct Nodo {
    int dato;
    Nodo* sig;
};

struct Cola {
    Nodo* frente;
    Nodo* final;
};

void inicializar(Cola &c);
void insertar(Cola &c, int valor);
void eliminar(Cola &c);
void mostrar(Cola c);

#endif
