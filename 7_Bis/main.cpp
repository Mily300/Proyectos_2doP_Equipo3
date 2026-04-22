#include <iostream>
#include "Tamano.h"

using namespace std;

int main() {
    imprimirEncabezado("TAMANOS DE TIPOS BASICOS (Primitivos)");
    
    cout << "bool:    " << sizeof(bool) << " byte(s)" << endl;
    cout << "char:    " << sizeof(char) << " byte(s)" << endl;
    cout << "int:     " << sizeof(int) << " bytes" << endl;
    cout << "float:   " << sizeof(float) << " bytes" << endl;
    cout << "double:  " << sizeof(double) << " bytes" << endl;
    
    cout << "puntero: " << sizeof(void*) << " bytes" << endl;

    imprimirEncabezado("TAMANO DEL TIPO CREADO");
    
    cout << "Clase Persona completa: " << sizeof(Persona) << " bytes" << endl;

    imprimirEncabezado("ANALISIS DE MEMORIA INTERNA");
    
    cout << "Tamano individual del 'string': " << sizeof(string) << " bytes" << endl;
    cout << "Tamano individual del 'int':    " << sizeof(int) << " bytes" << endl;
    cout << "Tamano individual del 'char':   " << sizeof(char) << " bytes" << endl;
    
    int sumaTeorica = sizeof(string) + sizeof(int) + sizeof(char);
    cout << "Suma teorica de atributos:      " << sumaTeorica << " bytes" << endl;

    cout << "\nCONCLUSION DEL ANALISIS" << endl;
    cout << "Notaras que la Clase Persona pesa (" << sizeof(Persona) << " bytes)," << endl;
    cout << "lo cual es MAYOR que la suma teorica de sus datos (" << sumaTeorica << " bytes)." << endl;
    cout << "Esto ocurre por dos razones fundamentales en C++:" << endl;
    cout << "1. Memory Padding: El sistema rellena con bytes vacios para alinear la memoria." << endl;
    cout << "2. Tabla Virtual (vtable): Al usar un destructor virtual, agrega un" << endl;
    cout << "   puntero oculto para gestionar el polimorfismo, aumentando el peso final." << endl;

    return 0;
}