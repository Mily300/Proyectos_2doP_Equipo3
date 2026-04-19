#include <iostream>
#include "cola_ref.h"
using namespace std;

int main() {
    ColaR c;
    inicializarR(c);

    int a = 6, b = 11, d = 26;

    insertarR(c, a);
    insertarR(c, b);
    insertarR(c, d);

    cout << "Cola con referencia: ";
    mostrarR(c);

    eliminarR(c);

    cout << "Despues de eliminar: ";
    mostrarR(c);

    return 0;
}
