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

bool compararInt(int* a, int* b);
bool compararChar(char* a, char* b);
bool compararPersona(PersonaPE* a, PersonaPE* b);

void mergeIndirectoInt(int* arr[], int left, int mid, int right);
void mergeSortInt(int* arr[], int left, int right);

void mergeIndirectoChar(char* arr[], int left, int mid, int right);
void mergeSortChar(char* arr[], int left, int right);

void mergeIndirectoPersona(PersonaPE* arr[], int left, int mid, int right);
void mergeSortPersona(PersonaPE* arr[], int left, int right);

#endif