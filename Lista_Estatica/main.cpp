#include <iostream>
#include "lista.h"
using namespace std;

int main() {
    Lista l;

    l.agregar(5);
    l.agregar(10);
    l.agregar(15);

    l.mostrar();

    return 0;
}
