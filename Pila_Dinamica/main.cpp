#include <iostream>
#include "pilaD.h"
using namespace std;

int main() {
    PilaD p;

    p.push(100);
    p.push(200);
    p.push(300);

    p.mostrar();

    p.pop();
    cout << "----\n";
    p.mostrar();

    return 0;
}
