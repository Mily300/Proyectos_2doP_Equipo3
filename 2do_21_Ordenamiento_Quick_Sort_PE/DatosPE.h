#ifndef DATOSPE_H
#define DATOSPE_H
#include <string>
#include <iostream>

struct PersonaPE {
    std::string nombre;
    int edad;
};

void inicializarPersona(PersonaPE* p, std::string n, int e);
void imprimirPersona(PersonaPE* p);

bool esMenorInt(int* a, int* b);
bool esMenorChar(char* a, char* b);
bool esMenorPersona(PersonaPE* a, PersonaPE* b);

int particionInt(int* arr[], int low, int high);
void quickSortIndirectoInt(int* arr[], int low, int high);
void imprimirArregloInt(int* arr[], int n);

int particionChar(char* arr[], int low, int high);
void quickSortIndirectoChar(char* arr[], int low, int high);
void imprimirArregloChar(char* arr[], int n);

int particionPersona(PersonaPE* arr[], int low, int high);
void quickSortIndirectoPersona(PersonaPE* arr[], int low, int high);

#endif