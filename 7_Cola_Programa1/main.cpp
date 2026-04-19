#include <iostream>
#include "cola.h"
using namespace std;

int main() {
    Cola c;
    inicializar(c);

    insertar(c, 60);
    insertar(c, 03);
    insertar(c, 26);

    cout << "Cola: ";
    mostrar(c);

    eliminar(c);

    cout << "Despues de eliminar: ";
    mostrar(c);

    return 0;
}
