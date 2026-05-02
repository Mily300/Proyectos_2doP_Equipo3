#ifndef DATOSPE_H
#define DATOSPE_H

struct Persona{
    int edad;
    char inicial;
};

// ENTEROS
void burbujaInt(int arr[], int idx[], int n);
void mostrarInt(int arr[], int idx[], int n);

// CHAR
void burbujaChar(char arr[], int idx[], int n);
void mostrarChar(char arr[], int idx[], int n);

// STRUCT
void burbujaPersona(Persona arr[], int idx[], int n);
void mostrarPersona(Persona arr[], int idx[], int n);

#endif
