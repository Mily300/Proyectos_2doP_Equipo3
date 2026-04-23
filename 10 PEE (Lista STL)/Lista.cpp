#include "lista.h"
#include <iostream>

void insertar(std::list<int>& l,int v){
    l.push_back(v);
}

void mostrar(const std::list<int>& l){
    std::list<int>::const_iterator it = l.begin();
    while(it != l.end()){
        std::cout << *it << " ";
        ++it;
    }
}
