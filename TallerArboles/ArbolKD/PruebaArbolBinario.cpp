#include <iostream>
#include <set>
#include <map>
#include "kdtree.h"  // Asegúrate de que kdtree.h esté correctamente implementado
#include "kdnodo.h"  // Asegúrate de que kdnodo.h esté correctamente implementado

using namespace std;

int main(int argc, char* argv[]) {
    cout << "ARBOL BINARIO ORDENADO" << endl;
    cout << "****************************************************************" << endl;

    kdtree<int> arbolito;  // Asegúrate de que la clase se llame correctamente (kdtree en lugar de kstree)

    for (int i = 0; i < 15; i++) {
        cout << "Inserte dato: ";
        int dato;
        cin >> dato;
        arbolito.insertar(dato);  // Asegúrate de que el método insertar esté implementado correctamente
    }

    cout << endl;
    cout << "Pre Orden:" << endl;
    arbolito.preOrden();  // Asegúrate de que preOrden esté implementado en kdtree
    cout << endl;

    cout << "Pos Orden: " << endl;
    arbolito.posOrden();  // Asegúrate de que posOrden esté implementado en kdtree
    cout << endl;

    return 0;  // La función main debe retornar un valor entero
}

