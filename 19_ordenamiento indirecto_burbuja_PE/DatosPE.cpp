#include <iostream>
#include "DatosPE.h"
using namespace std;

//ENTEROS 
void burbujaInt(int arr[], int idx[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[idx[j]] > arr[idx[j+1]]){
                int temp = idx[j];
                idx[j] = idx[j+1];
                idx[j+1] = temp;
            }
        }
    }
}

void mostrarInt(int arr[], int idx[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[idx[i]]<<" ";
    }
    cout<<endl;
}

//CHAR 
void burbujaChar(char arr[], int idx[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[idx[j]] > arr[idx[j+1]]){
                int temp = idx[j];
                idx[j] = idx[j+1];
                idx[j+1] = temp;
            }
        }
    }
}

void mostrarChar(char arr[], int idx[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[idx[i]]<<" ";
    }
    cout<<endl;
}

//STRUCT 
void burbujaPersona(Persona arr[], int idx[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[idx[j]].edad > arr[idx[j+1]].edad){
                int temp = idx[j];
                idx[j] = idx[j+1];
                idx[j+1] = temp;
            }
        }
    }
}

void mostrarPersona(Persona arr[], int idx[], int n){
    for(int i=0;i<n;i++){
        cout<<"Edad: "<<arr[idx[i]].edad
            <<" Inicial: "<<arr[idx[i]].inicial<<endl;
    }
}
