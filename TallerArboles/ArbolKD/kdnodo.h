/*****************************************************************************************************************************
Fecha: 1 octubre 2024
Autor: Daniel Rosas
Tema: Taller Arboles
Estructuras de datos
******************************************************************************************************************************/


#ifndef __KDNODO__H__
#define __KDNODO__H__

#include <vector>
#include <iostream>

using namespace std;

template<class T>
class kdnodo {
protected:
    vector<T> datos;  // Almacena las coordenadas (valores multidimensionales)
    kdnodo<T>* hijoIzq;
    kdnodo<T>* hijoDer;
    int tag;  // Para determinar la dimensión activa en la división

public:
    kdnodo();
    
    T& obtenerDato();  // Devuelve una referencia al dato
    void fijarDato(vector<T>& val);  // Fija el valor de los datos

    kdnodo<T>* obtenerHijoIzq();  // Devuelve el puntero al hijo izquierdo
    kdnodo<T>* obtenerHijoDer();  // Devuelve el puntero al hijo derecho

    void fijarHijoIzq(kdnodo<T>* izq);  // Fija el hijo izquierdo
    void fijarHijoDer(kdnodo<T>* der);  // Fija el hijo derecho

    void fijarTag(int value);  // Fija el valor de la etiqueta (dimensión)
    
    int altura();  // Devuelve la altura del árbol desde este nodo
    int tamano();  // Devuelve el tamaño del árbol desde este nodo

    void insertar(vector<T>& val);  // Inserta un valor en el árbol
    kdnodo<T>* buscar(vector<T>& val);  // Busca un valor en el árbol

    void preOrden();  // Recorrido pre-orden
    void inOrden();   // Recorrido in-orden
    void posOrden();  // Recorrido pos-orden
    void nivelOrden();  // Recorrido por niveles

    void maximo(int& maxi);  // Encuentra el valor máximo en la dimensión actual
    void minimo(int& mini);  // Encuentra el valor mínimo en la dimensión actual

    void imprimir();  // Imprime el nodo (usado para depuración)
};

#include "kdnodo.hxx"
#endif
