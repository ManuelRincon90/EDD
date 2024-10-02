#ifndef __KDTREE__H__
#define __KDTREE__H__

#include "kdnodo.h"  // Incluir la cabecera correcta

using namespace std;

template<class T>
class kdtree {
protected:
    kdnodo<T>* raiz;  // El nodo raíz del KD-Tree

public:
    // Constructor
    kdtree();

    // Verifica si el árbol está vacío
    bool esVacio();

    // Devuelve el dato de la raíz
    T& datoRaiz();

    // Retorna la altura del árbol
    int altura();

    // Retorna el tamaño del árbol (número de nodos)
    int tamano();

    // Inserta un valor en el árbol
    void insertar(vector<T>& val);

    // Elimina un valor del árbol
    bool eliminar(vector<T>& val);

    // Busca un valor en el árbol
    kdnodo<T>* buscar(vector<T>& val);

    // Recorridos del árbol
    void preOrden();
    void inOrden();
    void posOrden();
    void nivelOrden();

    // Encuentra el valor máximo del árbol
    void maximo(int& maxi);

    // Encuentra el valor mínimo del árbol
    void minimo(int& mini);
};

#include "kdtree.hxx"  // Incluir la implementación

#endif
