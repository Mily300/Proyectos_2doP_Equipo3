#ifndef PILAD_H
#define PILAD_H

struct Nodo {
    int dato;
    Nodo* sig;
};

class PilaD {
private:
    Nodo* tope;

public:
    PilaD();
    void push(int valor);
    void pop();
    void mostrar();
};

#endif
