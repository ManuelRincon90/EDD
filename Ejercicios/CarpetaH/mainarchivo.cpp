/**************************************************************
Autor: Daniel Rosas
Fecha: 23/07/2024
Materia: Estructuras de Datos
Temas: Presentacion de C++, Plantillas Principales
**************************************************************/

#include <iostream>
#include <string>
#include <math.h>
#include "biblioteca.h"
using namespace std;

int main(){
	int opcion;
	int numero;
	
	while(true){
	mostrarMenu();
	cout<<"Ingrese numero de opcion: ";
	cin>>opcion;
	if(opcion==6)break;
	switch(opcion){
	
	case 1:{
	cout<<"Ingrese numero: ";
	cin>>numero;
	int sumaNumeros = sumaRecursiva(numero);
	cout << "Suma: " << sumaNumeros << endl;
	break;
	}
	
	case 2:{
	cout<<"Ingrese numero: ";
	cin>>numero;
	int CP = cuadradosPares(numero);
	cout << "cuadradosPares: " << CP <<endl;
	break;
	}
	
	case 3:{
	cout<<"Ingrese numero: ";
	cin>>numero;
	int CP2 = cuadradosPares2(numero);
	cout << "cuadradosPares2: " << CP2 <<endl;
	break;
	}
	
	case 4:{
	cout<<"Ingrese numero: ";
	cin>>numero;
	int numFib = fibNumero(numero);
	cout << "fibNumero: " << numFib <<endl;
	break;
	}
	
	case 5:{
	string palabra;
	cout<<"Ingrese Palabra: ";
	cin>>palabra;
	char substring = 'a';
	cout<<"Ingrese letra: ";
	cin>>substring;
	bool caracter = lineal(palabra, substring, palabra.length()-1);
	cout << "lineal: " << caracter <<endl;
	break;
	}
	
	
	default:
	break;
	
	}
	}
}
