#include <iostream>
#include "DatosPE.h"
using namespace std;

// ENTEROS 
void swapInt(int &a, int &b){
    int temp = a; a = b; b = temp;
}

int particionInt(int arr[], int ini, int fin){
    int pivote = arr[fin];
    int i = ini - 1;

    for(int j=ini;j<fin;j++){
        if(arr[j] < pivote){
            i++;
            swapInt(arr[i], arr[j]);
        }
    }
    swapInt(arr[i+1], arr[fin]);
    return i+1;
}

void quickSortInt(int arr[], int ini, int fin){
    if(ini < fin){
        int pi = particionInt(arr, ini, fin);
        quickSortInt(arr, ini, pi-1);
        quickSortInt(arr, pi+1, fin);
    }
}

void mostrarInt(int arr[], int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

//CHAR
void swapChar(char &a, char &b){
    char temp = a; a = b; b = temp;
}

int particionChar(char arr[], int ini, int fin){
    char pivote = arr[fin];
    int i = ini - 1;

    for(int j=ini;j<fin;j++){
        if(arr[j] < pivote){
            i++;
            swapChar(arr[i], arr[j]);
        }
    }
    swapChar(arr[i+1], arr[fin]);
    return i+1;
}

void quickSortChar(char arr[], int ini, int fin){
    if(ini < fin){
        int pi = particionChar(arr, ini, fin);
        quickSortChar(arr, ini, pi-1);
        quickSortChar(arr, pi+1, fin);
    }
}

void mostrarChar(char arr[], int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

//STRUCT 
void swapPersona(Persona &a, Persona &b){
    Persona temp = a; a = b; b = temp;
}

int particionPersona(Persona arr[], int ini, int fin){
    int pivote = arr[fin].edad;
    int i = ini - 1;

    for(int j=ini;j<fin;j++){
        if(arr[j].edad < pivote){
            i++;
            swapPersona(arr[i], arr[j]);
        }
    }
    swapPersona(arr[i+1], arr[fin]);
    return i+1;
}

void quickSortPersona(Persona arr[], int ini, int fin){
    if(ini < fin){
        int pi = particionPersona(arr, ini, fin);
        quickSortPersona(arr, ini, pi-1);
        quickSortPersona(arr, pi+1, fin);
    }
}

void mostrarPersona(Persona arr[], int n){
    for(int i=0;i<n;i++){
        cout<<"Edad: "<<arr[i].edad<<" Inicial: "<<arr[i].inicial<<endl;
    }
}
