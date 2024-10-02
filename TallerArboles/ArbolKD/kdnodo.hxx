/*****************************************************************************************************************************
Fecha: 1 octubre 2024
Autor: Daniel Rosas
Tema: Taller Arboles
Estructuras de datos
******************************************************************************************************************************/



#include "kdnodo.h"
#include <bits/stdc++.h>

using namespace std;

template<class T>
kdnodo<T>::kdnodo() {
    this->hijoIzq = nullptr;  // Usar nullptr en lugar de NULL
    this->hijoDer = nullptr;
    this->tag = 0;
}

template<class T>
T& kdnodo<T>::obtenerDato() {
    return this->datos;  // Corregido para devolver `datos`, ya que no hay `dato`
}

template<class T>
void kdnodo<T>::fijarDato(vector<T>& val) {
    this->datos = val;
}

template<class T>
void kdnodo<T>::fijarTag(int value) {
    this->tag = value;
}

template<class T>
kdnodo<T>* kdnodo<T>::obtenerHijoIzq() {
    return this->hijoIzq;
}

template<class T>
kdnodo<T>* kdnodo<T>::obtenerHijoDer() {
    return this->hijoDer;
}

template<class T>
void kdnodo<T>::fijarHijoIzq(kdnodo<T>* izq) {
    this->hijoIzq = izq;
}

template<class T>
void kdnodo<T>::fijarHijoDer(kdnodo<T>* der) {
    this->hijoDer = der;
}

template<class T>
int kdnodo<T>::altura() {
    if (this->hijoIzq == nullptr && this->hijoDer == nullptr) {
        return 1;
    }
    if (this->hijoIzq == nullptr) {
        return this->hijoDer->altura();
    } else if (this->hijoDer == nullptr) {
        return this->hijoIzq->altura();
    }

    return max(this->hijoIzq->altura(), this->hijoDer->altura());
}

template<class T>
int kdnodo<T>::tamano() {
    if (this->hijoIzq == nullptr && this->hijoDer == nullptr) {
        return 1;
    }
    if (this->hijoIzq == nullptr) {
        return this->hijoDer->tamano() + 1;
    } else if (this->hijoDer == nullptr) {
        return this->hijoIzq->tamano() + 1;
    }

    return this->hijoIzq->tamano() + this->hijoDer->tamano() + 1;
}

template<class T>
void kdnodo<T>::insertar(vector<T>& val) {
    if (val[this->tag] > this->datos[this->tag]) {
        if (this->hijoDer == nullptr) {
            kdnodo* nuevo = new kdnodo();
            nuevo->fijarTag((this->tag + 1) % val.size());
            nuevo->fijarDato(val);
            this->fijarHijoDer(nuevo);
        } else {
            this->hijoDer->insertar(val);
        }
    } else if (val[this->tag] < this->datos[this->tag]) {
        if (this->hijoIzq == nullptr) {
            kdnodo* nuevo = new kdnodo();
            nuevo->fijarTag((this->tag + 1) % val.size());
            nuevo->fijarDato(val);
            this->fijarHijoIzq(nuevo);
        } else {
            this->hijoIzq->insertar(val);
        }
    }
}

template<class T>
kdnodo<T>* kdnodo<T>::buscar(vector<T>& val) {
    if (this->iguales(val)) {
        return this;
    }

    if (val[this->tag] < this->datos[this->tag]) {
        return this->hijoIzq != nullptr ? this->hijoIzq->buscar(val) : nullptr;
    } else {
        return this->hijoDer != nullptr ? this->hijoDer->buscar(val) : nullptr;
    }
}

template<class T>
bool kdnodo<T>::iguales(vector<T>& val) {
    for (int i = 0; i < val.size(); ++i) {
        if (this->datos[i] != val[i]) {
            return false;
        }
    }
    return true;
}

template<class T>
void kdnodo<T>::preOrden() {
    this->imprimir();
    if (this->hijoIzq != nullptr) {
        this->hijoIzq->preOrden();
    }
    if (this->hijoDer != nullptr) {
        this->hijoDer->preOrden();
    }
}

template<class T>
void kdnodo<T>::inOrden() {
    if (this->hijoIzq != nullptr) {
        this->hijoIzq->inOrden();
    }
    this->imprimir();
    if (this->hijoDer != nullptr) {
        this->hijoDer->inOrden();
    }
}

template<class T>
void kdnodo<T>::posOrden() {
    if (this->hijoIzq != nullptr) {
        this->hijoIzq->posOrden();
    }
    if (this->hijoDer != nullptr) {
        this->hijoDer->posOrden();
    }
    this->imprimir();
}

template<class T>
void kdnodo<T>::nivelOrden() {
    queue<kdnodo*> cola;
    cola.push(this);
    while (!cola.empty()) {
        kdnodo* nodoActual = cola.front();
        cola.pop();
        nodoActual->imprimir();
        if (nodoActual->hijoIzq != nullptr) {
            cola.push(nodoActual->hijoIzq);
        }
        if (nodoActual->hijoDer != nullptr) {
            cola.push(nodoActual->hijoDer);
        }
    }
}

template<class T>
void kdnodo<T>::maximo(int& maxi) {
    if (maxi < this->datos[this->tag]) {
        maxi = this->datos[this->tag];
    }
    if (this->hijoIzq != nullptr) {
        this->hijoIzq->maximo(maxi);
    }
    if (this->hijoDer != nullptr) {
        this->hijoDer->maximo(maxi);
    }
}

template<class T>
void kdnodo<T>::minimo(int& mini) {
    if (mini > this->datos[this->tag]) {
        mini = this->datos[this->tag];
    }
    if (this->hijoIzq != nullptr) {
        this->hijoIzq->minimo(mini);
    }
    if (this->hijoDer != nullptr) {
        this->hijoDer->minimo(mini);
    }
}

template<class T>
void kdnodo<T>::imprimir() {
    cout << "( ";
    for (int i = 0; i < this->datos.size(); ++i) {
        cout << this->datos[i];
        if (i != this->datos.size() - 1) {
            cout << ", ";
        }
    }
    cout << " )\n";
}
