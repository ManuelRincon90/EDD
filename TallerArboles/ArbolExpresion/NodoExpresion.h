/*****************************************************************************************************************************
Fecha: 1 octubre 2024
Autor: Daniel Rosas
Tema: Taller Arboles
Estructuras de datos
******************************************************************************************************************************/

#ifndef NODOEXPRESION_H
#define NODOEXPRESION_H
#include <string.h>
using namespace std;


class NodoExpresion{
  protected:
    char dato;
    bool operando;
    NodoExpresion *hijoIzq;
    NodoExpresion *hijoDer;
  public:
  NodoExpresion();
  ~NodoExpresion();

  char getDato();
  void setDato(char val);

  void setOperando(bool op);
  bool getOperando();

  NodoExpresion* getHijoIzq();
  NodoExpresion* getHijoDer();

  void setHijoIzq(NodoExpresion* izq);
  void setHijoDer(NodoExpresion* der);
};
#include "NodoExpresion.hxx"

#endif //NODOBINARIO_H
