#include <iostream>
#include "Cola.h"

int main(){
    Cola c;
    c.encolar(10);
    int x;
    c.desencolar(x);
    std::cout<<x;
}
