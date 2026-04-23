#include <iostream>
#include "cola.h"

int main(){
    Cola c;
    inicializar(c);

    encolar(c, 10);
    encolar(c, 20);
    encolar(c, 30);

    int x;

    while(desencolar(c, x)){
        std::cout << "Desencolado: " << x << std::endl;
    }

    if(vacia(c)){
        std::cout << "La cola está vacía\n";
    }

    return 0;
}
