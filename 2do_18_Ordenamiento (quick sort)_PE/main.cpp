#include <iostream>
#include "DatosPE.h"
using namespace std;

int main(){
    int opcion, n;

    do{
        cout<<"\n______MENU______\n";
        cout<<"1. Enteros\n";
        cout<<"2. Caracteres\n";
        cout<<"3. Personas\n";
        cout<<"4. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;

        switch(opcion){

        case 1:{
            cout<<"Cantidad: ";
            cin>>n;

            int *arr = new int[n];

            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            quickSortInt(arr,0,n-1);
            mostrarInt(arr,n);

            delete[] arr;
            break;
        }

        case 2:{
            cout<<"Cantidad: ";
            cin>>n;

            char *arr = new char[n];

            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            quickSortChar(arr,0,n-1);
            mostrarChar(arr,n);

            delete[] arr;
            break;
        }

        case 3:{
            cout<<"Cantidad: ";
            cin>>n;

            Persona *arr = new Persona[n];

            for(int i=0;i<n;i++){
                cin>>arr[i].edad;
                cin>>arr[i].inicial;
            }

            quickSortPersona(arr,0,n-1);
            mostrarPersona(arr,n);

            delete[] arr;
            break;
        }

        }

    }while(opcion!=4);

    return 0;
}
