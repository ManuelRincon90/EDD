/**************************************************************
Autor: Daniel Rosas
Fecha: 23/07/2024
Materia: Estructuras de Datos
Temas: Presentacion de C++, Plantillas Principales
**************************************************************/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int sumaRecursiva(int n){
	if(n <= 1) {
		return n;
	}
	else{
		return n + sumaRecursiva(n-1);
	}
}

int cuadradosPares(int n){
	if(n == 0){
		return n;
	}
	else if(n % 2 == 0) {
		return n*n + cuadradosPares(n-1);
	} else {
		return cuadradosPares(n - 1);
	}
}

int cuadradosPares2(int n){
	if(n == 0){
		return n;
	} else {
		return pow(n+n,2) + cuadradosPares2(n - 1);
	}
}

int fibNumero(int n){
 	if(n <= 1){
		return n;
	} else {
		return fibNumero(n-1) + fibNumero(n-2);
	}
}


bool lineal(string s, char c, int l){
	if(l < 0){
		return false;
	} else if (s[l] == c){
		return true;		
	} else {
		return lineal(s, c, l-1);
	}
}

void mostrarMenu(){
	cout<<"Seleccione opcion:"<<endl;
	cout<<"1. sumaRecursiva"<<endl;
	cout<<"2. cuadradosPares"<<endl;
	cout<<"3. cuadradosPares2"<<endl;
	cout<<"4. fibNumero"<<endl;
	cout<<"5. lineal"<<endl;
	cout<<"6. Salir"<<endl;
}


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
