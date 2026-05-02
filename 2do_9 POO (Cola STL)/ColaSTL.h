#ifndef COLASTL_H
#define COLASTL_H

#include <queue>

class ColaSTL {
private:
    std::queue<int> q;

public:
    void encolar(int valor);
    bool desencolar(int &valor);
    bool vacia() const;
    int frente() const;
};

#endif
