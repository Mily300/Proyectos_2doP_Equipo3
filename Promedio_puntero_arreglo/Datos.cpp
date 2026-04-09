 #include <iostream>
#include "datos.h"
using namespace std;

void Datos::llenar() {
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa numero: ";
        cin >> arr[i];
    }
}

void Datos::calcular() {
    int *p = arr;
    int suma = 0;
    int max = *p;
    int min = *p;

    for (int i = 0; i < 5; i++) {
        suma += *(p + i);

        if (*(p + i) > max) max = *(p + i);
        if (*(p + i) < min) min = *(p + i);
    }

    float promedio = suma / 5.0;

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Maximo: " << max << endl;
    cout << "Minimo: " << min << endl;
}
