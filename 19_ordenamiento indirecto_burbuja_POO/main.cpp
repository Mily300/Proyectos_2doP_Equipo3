#include "Burbuja.h"

int main(){
    Burbuja b;
    int opcion = 0, n;

    do{
        cout<<"\n______________MENU______________\n";
        cout<<"1. Enteros\n";
        cout<<"2. Caracteres\n";
        cout<<"3. Personas\n";
        cout<<"4. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;

        if(cin.fail()){
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Entrada invalida\n";
            continue;
        }

        switch(opcion){

        case 1:{
            cout<<"Cantidad: ";
            cin>>n;

            int *arr = new int[n];
            int *idx = new int[n];

            for(int i=0;i<n;i++){
                cout<<"Numero "<<i+1<<": ";
                cin>>arr[i];
                idx[i] = i;
            }

            b.ordenarInt(arr, idx, n);
            b.mostrarInt(arr, idx, n);

            delete[] arr;
            delete[] idx;
            break;
        }

        case 2:{
            cout<<"Cantidad: ";
            cin>>n;

            char *arr = new char[n];
            int *idx = new int[n];

            for(int i=0;i<n;i++){
                cout<<"Caracter "<<i+1<<": ";
                cin>>arr[i];
                idx[i] = i;
            }

            b.ordenarChar(arr, idx, n);
            b.mostrarChar(arr, idx, n);

            delete[] arr;
            delete[] idx;
            break;
        }

        case 3:{
            cout<<"Cantidad: ";
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

            b.ordenarPersona(arr, idx, n);
            b.mostrarPersona(arr, idx, n);

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
