#include <iostream>
#include "cola.h"
using namespace std;

int main() {
    Cola c;

    c.encolar(1);
    c.encolar(2);
    c.encolar(3);

    c.mostrar();

    c.desencolar();
    cout << "----\n";
    c.mostrar();

    return 0;
}
