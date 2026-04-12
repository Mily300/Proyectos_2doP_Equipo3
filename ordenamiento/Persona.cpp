#include <iostream>
#include "persona.h"
using namespace std;

void ListaPersonas::llenar() {
    for (int i = 0; i < 3; i++) {
        cout << "Nombre: ";
        cin >> personas[i].nombre;
        cout << "Edad: ";
        cin >> personas[i].edad;
    }
}

void ListaPersonas::mostrar() {
    Persona *p = personas;

    for (int i = 0; i < 3; i++) {
        cout << "Nombre: " << (p + i)->nombre << endl;
        cout << "Edad: " << (p + i)->edad << endl;
        cout << "----\n";
    }
}
