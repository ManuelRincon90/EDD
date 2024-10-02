/*****************************************************************************************************************************
Fecha: 1 octubre 2024
Autor: Daniel Rosas
Tema: Taller Arboles
Estructuras de datos
******************************************************************************************************************************/


#include "kdtree.h"
#include "kdnodo.h"

using namespace std;

template<class T>
kdtree<T>::kdtree() {
    this->raiz = NULL;
}

template<class T>
bool kdtree<T>::esVacio() {
    return this->raiz == NULL;
}

template<class T>
vector<T>& kdtree<T>::datoRaiz() {
    if (this->raiz != NULL) {
        return this->raiz->obtenerDato();
    }
    throw runtime_error("El árbol está vacío.");
}

template<class T>
int kdtree<T>::altura() {
    return this->raiz ? this->raiz->altura() : 0;
}

template<class T>
int kdtree<T>::tamano() {
    return this->raiz ? this->raiz->tamano() : 0;
}

template<class T>
void kdtree<T>::insertar(vector<T>& val) {
    if (this->raiz != NULL) {
        this->raiz->insertar(val);
    } else {
        kdnodo<T>* nuevo = new kdnodo<T>();
        nuevo->fijarDato(val);
        nuevo->fijarTag(0); // Asignar el tag inicial
        this->raiz = nuevo;
    }
}

template<class T>
bool kdtree<T>::eliminar(vector<T>& val) {
    // Implementar la lógica de eliminación aquí
    return false; // Placeholder
}

template<class T>
kdnodo<T>* kdtree<T>::buscar(vector<T>& val) {
    if (this->raiz != NULL) {
        return this->raiz->buscar(val);
    }
    return NULL; // Árbol vacío
}

template<class T>
void kdtree<T>::preOrden() {
    if (this->raiz != NULL) {
        this->raiz->preOrden();
    }
}

template<class T>
void kdtree<T>::inOrden() {
    if (this->raiz != NULL) {
        this->raiz->inOrden();
    }
}

template<class T>
void kdtree<T>::posOrden() {
    if (this->raiz != NULL) {
        this->raiz->posOrden();
    }
}

template<class T>
void kdtree<T>::nivelOrden() {
    if (this->raiz != NULL) {
        this->raiz->nivelOrden();
    }
}

template<class T>
void kdtree<T>::maximo(int& maxi) {
    if (this->raiz != NULL) {
        this->raiz->maximo(maxi);
    }
}

template<class T>
void kdtree<T>::minimo(int& mini) {
    if (this->raiz != NULL) {
        this->raiz->minimo(mini);
    }
}

