#include "colaSTL.h"

void encolar(std::queue<int>& q,int v){
    q.push(v);
}

bool desencolar(std::queue<int>& q,int &v){
    if(q.empty()) return false;
    v=q.front();
    q.pop();
    return true;
}
