#include "Cola.h"

Cola::Cola():frente(nullptr),fondo(nullptr){}

Cola::~Cola(){
    int x;
    while(desencolar(x));
}

void Cola::encolar(int valor){
    Nodo* n=new Nodo(valor);
    if(!fondo) frente=fondo=n;
    else{ fondo->sig=n; fondo=n; }
}

bool Cola::desencolar(int &valor){
    if(!frente) return false;
    Nodo* aux=frente;
    valor=aux->dato;
    frente=frente->sig;
    delete aux;
    return true;
}

bool Cola::vacia() const { return frente==nullptr; }

int Cola::frenteCola() const { return frente->dato; }
