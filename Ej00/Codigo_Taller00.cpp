/**************************
Fecha: 21 de agosto 2024
Autor: Daniel Rosas
Tema: Taller 00
Estructuras de datos
**************************/


#include <iostream>
#include <cstdlib> // Para std::rand() y std::srand()
#include <ctime>   // Para std::time()

using namespace std;

const int TAMANO_ARRAY = 10; // Tamaño del array

// Función para generar números aleatorios entre min y max
int generarNumeroAleatorio(int min, int max) {
    return min + std::rand() % (max - min + 1);
}

// Función para llenar el array con números aleatorios
void llenarArrayConAleatorios(int array[], int tamano) {
    for (int i = 0; i < tamano; ++i) {
        array[i] = generarNumeroAleatorio(0, 25);
    }
}

// Función para imprimir el contenido del array
void imprimirContenidoArray(int *puntero, int tamano) {
    for (int i = 0; i < tamano; ++i) {
        std::cout << *(puntero + i) << " ";
    }
    std::cout << std::endl;
}

// Función para imprimir las direcciones del array
void imprimirDireccionesArray(int *puntero, int tamano) {
    for (int i = 0; i < tamano; ++i) {
        std::cout << (puntero + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::srand(std::time(0)); // Inicializa la semilla para números aleatorios

    int array[TAMANO_ARRAY];

    // Llenar el array con números aleatorios
    llenarArrayConAleatorios(array, TAMANO_ARRAY);

    // Crear un puntero que apunte al primer elemento del array
    int *puntero = array;

    // Imprimir el contenido del array usando el puntero
    std::cout << "Contenido del array: ";
    imprimirContenidoArray(puntero, TAMANO_ARRAY);

    // Imprimir las direcciones del contenido del array usando el puntero
    std::cout << "Direcciones del array: ";
    imprimirDireccionesArray(puntero, TAMANO_ARRAY);

    return 0;
}
