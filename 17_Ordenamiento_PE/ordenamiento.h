#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

// ENTEROS
void mergeInt(int arr[], int inicio, int medio, int fin);
void mergeSortInt(int arr[], int inicio, int fin);

// CARACTERES
void mergeChar(char arr[], int inicio, int medio, int fin);
void mergeSortChar(char arr[], int inicio, int fin);

// TIPO PROPIO
struct Persona {
    int edad;
};

void mergePersona(Persona arr[], int inicio, int medio, int fin);
void mergeSortPersona(Persona arr[], int inicio, int fin);

#endif
