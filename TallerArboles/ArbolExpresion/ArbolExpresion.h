/*****************************************************************************************************************************
Fecha: 1 octubre 2024
Autor: Daniel Rosas
Tema: Taller Arboles
Estructuras de datos
******************************************************************************************************************************/

#ifndef ARBOLEXPRESION_H
#define  ARBOLEXPRESION_H
#include "NodoExpresion.h"
#include <string>

using namespace std;

class ArbolExpresion {
  protected:
    NodoExpresion* raiz;
public:
    ArbolExpresion();
    ~ArbolExpresion();
    NodoExpresion* getRaiz();
    void setRaiz(NodoExpresion* nod);

    void llenarDesdePrefija(string &expresion);
    void llenarDesdePosfija (string &expresion);

    void  obtenerPrefija(NodoExpresion* inicio);
    void  obtenerInfija(NodoExpresion* inicio);
    void  obtenerPosfija(NodoExpresion* inicio);
    int evaluar(NodoExpresion* nodi);
    bool siOperando(char car);
};
#include "ArbolExpresion.hxx"

#endif

