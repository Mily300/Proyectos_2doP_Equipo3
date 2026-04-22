#include "Tamano.h"
#include <iostream>

using namespace std;

Persona::Persona(string n, int e, char g) {
    nombre = n;
    edad = e;
    genero = g;
}

Persona::~Persona() {}

void Persona::mostrar() const {
    cout << "Datos: " << nombre << ", " << edad << " años, " << genero << endl;
}

void imprimirEncabezado(string titulo) {
    cout << "\n==================================================" << endl;
    cout << "   " << titulo << endl;
    cout << "==================================================" << endl;
}