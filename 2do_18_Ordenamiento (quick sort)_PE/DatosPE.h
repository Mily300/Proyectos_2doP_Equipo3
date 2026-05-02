#ifndef DATOSPE_H
#define DATOSPE_H

//STRUCT (nuevo tipo de dato) 
struct Persona{
    int edad;
    char inicial;
};

//ENTEROS
void quickSortInt(int arr[], int inicio, int fin);
void mostrarInt(int arr[], int n);

//CHAR 
void quickSortChar(char arr[], int inicio, int fin);
void mostrarChar(char arr[], int n);

//STRUCT 
void quickSortPersona(Persona arr[], int inicio, int fin);
void mostrarPersona(Persona arr[], int n);

#endif
