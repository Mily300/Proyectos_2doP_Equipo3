#ifndef COLA_H
#define COLA_H

struct Nodo {
    int dato;
    Nodo* sig;
};

class Cola {
private:
    Nodo* frente;
    Nodo* fondo;

public:
    Cola();
    void encolar(int valor);
    bool desencolar(int &valor);
};

#endif
