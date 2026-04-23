#include "pila.h"
#include <iostream>

int main(){
    std::stack<int> s;
    push(s,5);

    int x;
    pop(s,x);
    std::cout<<x;
}
