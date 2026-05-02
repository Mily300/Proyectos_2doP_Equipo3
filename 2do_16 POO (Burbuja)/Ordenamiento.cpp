#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

#include <iostream>
#include <string>

class Ordenamiento {
public:
    template<typename T>
    void burbuja(T arr[], int n);

    template<typename T>
    void imprimirArray(const T arr[], int n);
};

struct Registro {
    int clave;
    std::string nombre;
};

bool operator>(const Registro &a, const Registro &b);
std::ostream& operator<<(std::ostream &os, const Registro &r);

#include "Ordenamiento.cpp"
#endif
