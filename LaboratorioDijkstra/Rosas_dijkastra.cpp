/*****************************************************************************************************************************
Fecha: 30 octubre 2024
Autor: Daniel Rosas
Tema: Taller Dijkstra
Estructuras de datos
******************************************************************************************************************************/


#include <iostream>
#include <climits>
using namespace std;

// Función para encontrar el vértice con la mínima distancia que aún no ha sido incluido en el conjunto Tset
int miniDist(int distance[], bool Tset[], int size) {
    int minimum = INT_MAX, index;

    // Itera sobre todos los vértices para encontrar el de menor distancia
    for (int k = 0; k < size; k++) {
        if (Tset[k] == false && distance[k] <= minimum) {
            minimum = distance[k];
            index = k;
        }
    }
    return index;
}

// Implementación del algoritmo de Dijkstra
void DijkstraAlgo(int graph[7][7], int src, int size) {
    int distance[size]; // Almacena la distancia mínima desde la fuente
    bool Tset[size];    // Tset[i] será verdadero si el vértice i está incluido en el camino más corto

    // Inicializa todas las distancias como infinitas y Tset[] como falso
    for (int k = 0; k < size; k++) {
        distance[k] = INT_MAX;
        Tset[k] = false;
    }

    distance[src] = 0; // La distancia del nodo fuente a sí mismo es siempre 0

    // Encuentra el camino más corto para todos los vértices
    for (int k = 0; k < size - 1; k++) {
        int m = miniDist(distance, Tset, size); // Selecciona el vértice con la distancia mínima
        Tset[m] = true;

        // Actualiza el valor de distancia de los vértices adyacentes al vértice seleccionado
        for (int j = 0; j < size; j++) {
            // Actualiza distance[j] solo si no está en Tset, hay una arista desde m a j,
            // y el peso total del camino desde src hasta j a través de m es menor que el valor actual de distance[j]
            if (!Tset[j] && graph[m][j] && distance[m] != INT_MAX && distance[m] + graph[m][j] < distance[j]) {
                distance[j] = distance[m] + graph[m][j];
            }
        }
    }

    // Imprime la distancia mínima desde el nodo fuente a cada vértice
    cout << "Vertice \t Distancia desde la fuente" << endl;
    for (int k = 0; k < size; k++) {
        char str = 65 + k; // Convierte el índice a un carácter ('A' para 0, 'B' para 1, etc.)
        cout << str << "\t\t" << distance[k] << endl;
    }
}

int main() {
    // Matriz de adyacencia basada en el grafo dado en la imagen (ajustar según el grafo)
    int graph[7][7] = {
        {0, 2, 4, 0, 0, 0, 0},
        {2, 0, 0, 5, 0, 0, 0},
        {4, 0, 0, 8, 0, 0, 0},
        {0, 5, 8, 0, 10, 6, 15},
        {0, 0, 0, 10, 0, 2, 6},
        {0, 0, 0, 6, 2, 0, 2},
        {0, 0, 0, 15, 6, 2, 0}
    };

    // Llama al algoritmo de Dijkstra desde el nodo 'A' (índice 0)
    DijkstraAlgo(graph, 0, 7);

    return 0;
}
