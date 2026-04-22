#ifndef TAMANO_H
#define TAMANO_H

#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    char genero;

public:
    Persona(string n = "", int e = 0, char g = 'M');
    
    virtual ~Persona(); 
    void mostrar() const;
};

void imprimirEncabezado(string titulo);

#endif