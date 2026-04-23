#ifndef LISTA_H
#define LISTA_H

#include <list>

class Lista {
private:
    std::list<int> lst;

public:
    void insertarFinal(int valor);
    void insertarInicio(int valor);
    void mostrar() const;
    bool vacia() const;
};

#endif
