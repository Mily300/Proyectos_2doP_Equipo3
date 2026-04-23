#include "colaSTL.h"
#include <iostream>

int main(){
    std::queue<int> q;
    encolar(q,10);

    int x;
    desencolar(q,x);
    std::cout<<x;
}
