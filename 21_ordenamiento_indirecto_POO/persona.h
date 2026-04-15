#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona();
    Persona(string n, int e);

    int getEdad();
    string getNombre();

    void setEdad(int e);
    void setNombre(string n);
};

#endif
