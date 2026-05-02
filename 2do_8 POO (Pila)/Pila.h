#ifndef PILA_H
#define PILA_H

#include <stack>

class Pila {
private:
    std::stack<int> s;

public:
    void apilar(int valor);
    bool desapilar(int &valor);
    bool vacia() const;
    int cima() const;
};

#endif
