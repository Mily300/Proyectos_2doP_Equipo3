template <class T>
ColeccionArreglo<T>::ColeccionArreglo(int cap) {
    capacidad = cap;
    tope = 0;
    arreglo = new T[capacidad];
}

template <class T>
ColeccionArreglo<T>::~ColeccionArreglo() {
    delete[] arreglo;
}

template <class T>
void ColeccionArreglo<T>::insertar(T elemento) {
    if (tope < capacidad) {
        arreglo[tope] = elemento;
        tope++;
        std::cout << "Insertado: " << elemento << std::endl;
    } else {
        std::cout << "Error: Coleccion llena." << std::endl;
    }
}

template <class T>
void ColeccionArreglo<T>::eliminar() {
    if (!estaVacia()) {
        tope--;
        std::cout << "Elemento eliminado." << std::endl;
    } else {
        std::cout << "Error: Coleccion vacia." << std::endl;
    }
}

template <class T>
bool ColeccionArreglo<T>::estaVacia() const {
    return tope == 0;
}

template <class T>
void ColeccionArreglo<T>::mostrar() const {
    if (estaVacia()) {
        std::cout << "Vacia." << std::endl;
        return;
    }
    std::cout << "Contenido: ";
    for (int i = 0; i < tope; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
}