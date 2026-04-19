#include <iostream>
#include "ordenamiento.h"
using namespace std;

int main() {

    // ENTEROS
    int a[5] = {5, 2, 9, 1, 3};
    mergeSortInt(a, 0, 4);

    cout << "Enteros: ";
    for(int i=0;i<5;i++) cout << a[i] << " ";
    cout << endl;

    // CARACTERES
    char c[5] = {'d','a','c','b','e'};
    mergeSortChar(c, 0, 4);

    cout << "Caracteres: ";
    for(int i=0;i<5;i++) cout << c[i] << " ";
    cout << endl;

    // PERSONA
    Persona p[3] = {{30},{20},{25}};
    mergeSortPersona(p, 0, 2);

    cout << "Personas (edad): ";
    for(int i=0;i<3;i++) cout << p[i].edad << " ";
    cout << endl;

    return 0;
}
