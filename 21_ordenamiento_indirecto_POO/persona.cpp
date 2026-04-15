#include "Persona.h"

Persona::Persona() {
    nombre = "";
    edad = 0;
}

Persona::Persona(string n, int e) {
    nombre = n;
    edad = e;
}

int Persona::getEdad() {
    return edad;
}

string Persona::getNombre() {
    return nombre;
}

void Persona::setEdad(int e) {
    edad = e;
}

void Persona::setNombre(string n) {
    nombre = n;
}
