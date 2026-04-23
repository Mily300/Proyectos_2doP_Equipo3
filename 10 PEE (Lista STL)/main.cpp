#include <list>
#include "lista.h"

int main(){
    std::list<int> l;

    insertar(l,5);
    insertar(l,10);

    mostrar(l);

    return 0;
}
