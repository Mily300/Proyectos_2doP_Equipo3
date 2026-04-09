#include <iostream>
#include "pila.h"
using namespace std;

int main() {
    Pila p;

    p.push(10);
    p.push(20);
    p.push(30);

    p.mostrar();

    p.pop();
    cout << "----\n";
    p.mostrar();

    return 0;
}
