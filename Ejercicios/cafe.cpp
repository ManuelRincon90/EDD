/************************
Nombre: Daniel Rosas
Fecah: 17/08/2024
Tema: Ejemplo/Tarea 01
Materia: Estructuras de Datos
*************************/
#include <iostream>
using namespace std;

class Cafetera{
public:
	virtual void Capuchino() = 0;
	virtual void Tinto() = 0;
};

class Oster : public Cafetera{
public:
	void Capuchino(){
	cout<< "Oster haciendo capuchino"<<endl;
	cout<< " (      )\n"
                "  )    (\n"
                " ( (   ) )\n"
                "  ) ) ( (\n"
                "  /____ \n"
                " |     |\n"
                " |_____|\n";
	}
    void Tinto() {
        cout<< "Oster haciendo tinto"<<endl;
	cout<< " (      )\n"
               "  )    (\n"
               " ( (   ) )\n"
               "  ) ) ( (\n"
               "  /____ \n"
               " |     |\n"
               " |_____|\n";
	}
};

class Haceb : public Cafetera{
public:
	void Capuchino(){
        cout<< "Haceb haciendo capuchino"<<endl;
	cout<< " (      )\n"
               "  )    (\n"
               " ( (   ) )\n"
               "  ) ) ( (\n"
               "  /____ \n"
               " |     |\n"
               " |_____|\n";
	}
    void Tinto(){
	cout<< "Haceb haciendo tinto"<<endl;
	cout<< " (      )\n"
               "  )    (\n"
               " ( (   ) )\n"
               "  ) ) ( (\n"
               "  /____ \n"
               " |     |\n"
               " |_____|\n";
	}
};

void mostrarMenu(){
	cout<<"Seleccione cafetera:"<<endl;
	cout<<"1. Oster"<<endl;
	cout<<"2. Haceb"<<endl;
	cout<<"3. Salir"<<endl;
}

void mostrarOpciones(){
	cout<<"Seleccione una opcion: "<<endl;
	cout<<"1. Hacer Capuchino"<<endl;
	cout<<"2. Hacer Tinto"<<endl;
	cout<<"3. Volver al menu anterior"<<endl;
}

int main(){
	Cafetera* cafetera = nullptr;
	int opcionCafetera, opcionCafe;

	while (true){
	mostrarMenu();
	cin >> opcionCafetera;

	if (opcionCafetera == 3) break;
	switch (opcionCafetera){
            case 1:
                cafetera = new Oster();
                break;
            case 2:
                cafetera = new Haceb();
                break;
            default:
                cout<<"Opción no válida. Intente de nuevo."<<endl;
                continue;
        }
        while (true){
            mostrarOpciones();
            cin >> opcionCafe;
            if (opcionCafe == 3) break;
            switch (opcionCafe){
                case 1:
                    cafetera->Capuchino();
                    break;
                case 2:
                    cafetera->Tinto();
                    break;
                default:
                    cout<<"Opción no válida. Intente de nuevo."<<endl;
            }
        }
        delete cafetera;
    }
    return 0;
}