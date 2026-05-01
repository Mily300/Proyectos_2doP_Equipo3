#include "DatosPE.h"

void inicializarPersona(PersonaPE* p, string n, int e) {
    p->nombre = n;
    p->edad = e;
}

void imprimirPersona(PersonaPE* p) {
    std::cout << "Nombre: " << p->nombre << " | Edad: " << p->edad << " anos";
}