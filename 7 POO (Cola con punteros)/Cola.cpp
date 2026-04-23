#ifndef COLA_H
#define COLA_H

class Cola {
private:
    struct Nodo {
        int dato;
        Nodo* sig;
        Nodo(int d):dato(d),sig(nullptr){}
    };
    Nodo* frente;
    Nodo* fondo;

public:
    Cola();
    ~Cola();

    void encolar(int valor);
    bool desencolar(int &valor);
    bool vacia() const;
    int frenteCola() const;
};

#endif
