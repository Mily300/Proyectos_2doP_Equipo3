#include <iostream>
#include "DatosPE.h"
using namespace std;

int main(){
    int opcion = 0, n;

    do{
        cout<<"\n_________MENU_________\n";
        cout<<"1. Enteros\n";
        cout<<"2. Caracteres\n";
        cout<<"3. Personas\n";
        cout<<"4. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;

        // Validar entrada incorrecta 
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Entrada invalida\n";
            continue;
        }

        switch(opcion){

        case 1:{
            cout<<"Cantidad de numeros: ";
            cin>>n;

            int *arr = new int[n];
            int *idx = new int[n];

            for(int i=0;i<n;i++){
                cout<<"Numero "<<i+1<<": ";
                cin>>arr[i];
                idx[i] = i;
            }

            burbujaInt(arr, idx, n);

            cout<<"Ordenado:\n";
            mostrarInt(arr, idx, n);

            delete[] arr;
            delete[] idx;
            break;
        }

        case 2:{
            cout<<"Cantidad de caracteres: ";
            cin>>n;

            char *arr = new char[n];
            int *idx = new int[n];

            for(int i=0;i<n;i++){
                cout<<"Caracter "<<i+1<<": ";
                cin>>arr[i];
                idx[i] = i;
            }

            burbujaChar(arr, idx, n);

            cout<<"Ordenado:\n";
            mostrarChar(arr, idx, n);

            delete[] arr;
            delete[] idx;
            break;
        }

        case 3:{
            cout<<"Cantidad de personas: ";
            cin>>n;

            Persona *arr = new Persona[n];
            int *idx = new int[n];

            for(int i=0;i<n;i++){
                cout<<"Edad: ";
                cin>>arr[i].edad;
                cout<<"Inicial: ";
                cin>>arr[i].inicial;
                idx[i] = i;
            }

            burbujaPersona(arr, idx, n);

            cout<<"Ordenado por edad:\n";
            mostrarPersona(arr, idx, n);

            delete[] arr;
            delete[] idx;
            break;
        }

        case 4:
            cout<<"Saliendo...\n";
            break;

        default:
            cout<<"Opcion invalida\n";
        }

    }while(opcion != 4);

    return 0;
}
