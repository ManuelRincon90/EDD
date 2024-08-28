/****************************************
Autor: Daniel Rosas y Juan Forero
Fecha: 28 Agosto 2024
Materia: Estructura de Datos
Tema: implementación BST 
****************************************/

#include <iostream>
using namespace std;

// Estructura de un nodo para un árbol binario de búsqueda (BST)
struct Nodo {
    int dato;
    struct Nodo *left, *right;
};

// Función para crear un nuevo nodo
struct Nodo *nuevoNodo(int dato) {
    struct Nodo *temporal = new struct Nodo();
    temporal->dato = dato;
    temporal->left = temporal->right = NULL;
    return temporal;
}

// Recorrido en preorden (Raíz, Izquierda, Derecha)
void preOrdenT(struct Nodo *raiz) {
    if (raiz == NULL)
        return;
    cout << raiz->dato << "->";
    preOrdenT(raiz->left);
    preOrdenT(raiz->right);
}

// Recorrido en postorden (Izquierda, Derecha, Raíz)
void postOrdenT(struct Nodo *raiz) {
    if (raiz == NULL)
        return;
    postOrdenT(raiz->left);
    postOrdenT(raiz->right);
    cout << raiz->dato << "->";
}

// Recorrido en inorden (Izquierda, Raíz, Derecha)
void inOrdenT(struct Nodo *raiz) {
    if (raiz == NULL)
        return;
    inOrdenT(raiz->left);
    cout << raiz->dato << "->";
    inOrdenT(raiz->right);
}

// Insertar un nuevo valor en el BST
struct Nodo *insertarBST(struct Nodo *nodo, int newDato) {
    if (nodo == NULL)
        return nuevoNodo(newDato);
    if (newDato < nodo->dato)
        nodo->left = insertarBST(nodo->left, newDato);
    else
        nodo->right = insertarBST(nodo->right, newDato);
    return nodo;
}

// Encontrar el nodo con el valor mínimo en un BST
struct Nodo *minValorNodo(struct Nodo *nodo) {
    struct Nodo *actual = nodo;
    while (actual && actual->left != NULL)
        actual = actual->left;
    return actual;
}

// Eliminar un nodo con un valor específico del BST
struct Nodo *borrarNodo(struct Nodo *nodo, int dato) {
    if (nodo == NULL)
        return nodo;
    if (dato < nodo->dato)
        nodo->left = borrarNodo(nodo->left, dato);
    else if (dato > nodo->dato)
        nodo->right = borrarNodo(nodo->right, dato);
    else {
        if (nodo->left == NULL) {
            struct Nodo *temporal = nodo->right;
            delete nodo;
            return temporal;
        } else if (nodo->right == NULL) {
            struct Nodo *temporal = nodo->left;
            delete nodo;
            return temporal;
        }
        struct Nodo *temp = minValorNodo(nodo->right);
        nodo->dato = temp->dato;
        nodo->right = borrarNodo(nodo->right, temp->dato);
    }
    return nodo;
}

int main() {
    struct Nodo *arbol1 = NULL;
    arbol1 = insertarBST(arbol1, 1);
    arbol1 = insertarBST(arbol1, 2);
    arbol1 = insertarBST(arbol1, 3);
    arbol1 = insertarBST(arbol1, 4);
    arbol1 = insertarBST(arbol1, 5);
    arbol1 = insertarBST(arbol1, 6);
    arbol1 = insertarBST(arbol1, 7);
    arbol1 = insertarBST(arbol1, 8);
    arbol1 = insertarBST(arbol1, 9);
    arbol1 = insertarBST(arbol1, 10);
    arbol1 = insertarBST(arbol1, 11);
    arbol1 = insertarBST(arbol1, 12);
    arbol1 = insertarBST(arbol1, 13);
    arbol1 = insertarBST(arbol1, 14);
    arbol1 = insertarBST(arbol1, 15);
    arbol1 = insertarBST(arbol1, 16);
    arbol1 = insertarBST(arbol1, 17);
    arbol1 = insertarBST(arbol1, 18);
    
    cout << "\n -PreOrden ";
    preOrdenT(arbol1);
    cout << "\n -PostOrden ";
    postOrdenT(arbol1);
    cout << "\n -InOrden ";
    inOrdenT(arbol1);

    cout << "Se elimina el nodo(40)" << endl;
    arbol1 = borrarNodo(arbol1, 18);
    inOrdenT(arbol1);

    return 0;
}




