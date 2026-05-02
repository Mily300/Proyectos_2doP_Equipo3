#include "cola.h"

void inicializar(Cola &c){
    c.frente = 0;
    c.final = -1;
}

bool encolar(Cola &c, int v){
    if(c.final == MAX - 1) return false;

    c.final++;
    c.datos[c.final] = v;
    return true;
}

bool desencolar(Cola &c, int &v){
    if(c.frente > c.final) return false;

    v = c.datos[c.frente];
    c.frente++;
    return true;
}

bool vacia(Cola c){
    return c.frente > c.final;
}
