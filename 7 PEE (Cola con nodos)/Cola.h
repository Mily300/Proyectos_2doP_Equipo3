#ifndef COLA_H
#define COLA_H

#define MAX 100

struct Cola {
    int datos[MAX];
    int frente;
    int final;
};

void inicializar(Cola &c);
bool encolar(Cola &c, int v);
bool desencolar(Cola &c, int &v);
bool vacia(Cola c);

#endif
