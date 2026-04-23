#include "pila.h"

void push(std::stack<int>& s, int v){
    s.push(v);
}

bool pop(std::stack<int>& s, int &v){
    if(s.empty()) return false;
    v=s.top();
    s.pop();
    return true;
}
