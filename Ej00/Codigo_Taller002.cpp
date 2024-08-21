/*********
Fecha: 21 de Agosto 2024
Autor: Daniel Rosas
Tema: Taller00
Estructura de Datos
Ejercicio 2
*********/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Cliente {
    string nombre;
    string direccion;
    double montoTotal;
};

void capturarDatos(Cliente *cliente) {
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, cliente->nombre);
    cout << "Ingrese la dirección del cliente: ";
    getline(cin, cliente->direccion);
    cout << "Ingrese el monto total de la factura: ";
    cin >> cliente->montoTotal;
    cin.ignore();
}

void imprimirFactura(Cliente *cliente, const string &nombreFichero) {
    ofstream archivo(nombreFichero);

    if (archivo.is_open()) {
        archivo << "Factura del Cliente" << endl;
        archivo << "Nombre: " << cliente->nombre << endl;
        archivo << "Dirección: " << cliente->direccion << endl;
        archivo << "Monto Total: $" << cliente->montoTotal << endl;
        archivo.close();
        cout << "Factura escrita en " << nombreFichero << endl;
    } else {
        cerr << "No se pudo abrir el archivo." << endl;
    }
}

int main() {
    Cliente cliente;
    string nombreFichero = "factura.txt";

    capturarDatos(&cliente);
    imprimirFactura(&cliente, nombreFichero);

    return 0;
}
