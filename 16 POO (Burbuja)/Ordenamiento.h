#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

#include <iostream>
#include <string>

class Ordenamiento {
public:
    template<typename T>
    void burbuja(T arr[], int n) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - 1 - i; ++j) {
                if (arr[j] > arr[j + 1]) {
                    T aux = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = aux;
                }
            }
        }
    }

    template<typename T>
    void imprimirArray(const T arr[], int n) {
        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
};

struct Registro {
    int clave;
    std::string nombre;
};

inline bool operator>(const Registro &a, const Registro &b) {
    return a.clave > b.clave;
}

inline std::ostream& operator<<(std::ostream &os, const Registro &r) {
    os << "{" << r.clave << "," << r.nombre << "}";
    return os;
}

#endif
