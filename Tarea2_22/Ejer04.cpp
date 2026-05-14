#include<iostream>
using namespace std;




int main (int argc, char *argv[]) {
	
	const int MAX = 100;
	int cantEst = 0;
	
	string nombres[MAX];
	int edades[MAX];
	int notas[MAX];
	int deportes[MAX];
	
	cout << "Bienvenido a la base de de datos de estudiantes" << endl;
	cout << "Ingrese cuantos estudiantes va a ingresar: ";
	cin >> cantEst;
	
	cout << endl << endl;
	
	if(cantEst < 0 || cantEst > 100){
		return 0;
	}
	
	
	for (int i = 0; i < cantEst; i++){
		string nombreTemp = "";
		int edadTemp = 0;
		int notaTemp = 0;
		int deporteTemp = 0;
		
		
		cout << "Cual es el nombre del " << i + 1 << " estudiante?" << endl;
		cin >> nombreTemp;
		
		cout << "Cual es la edad del " << i + 1 << " estudiante?" << endl;
		cin >> edadTemp;
		
		cout << "Cual es la nota del " << i + 1 << " estudiante?" << endl;
		cin >> notaTemp;
		
		cout << "Cual es el deporte fav del " << i << " estudiante? (1. Futbol, 2.Volleyball, 3.Basketball, 4.Otro)" << endl;
		cin >> deporteTemp;
		
		nombres[i] = nombreTemp;
		edades[i] = edadTemp;
		notas[i] = notaTemp;
		deportes[i] = deporteTemp;
		
		cout << endl << endl;
	}
	
	int notaMayor = 0;
	int aprobaron = 0;
	int futbol = 0;
	
	string deportesNombre[4] = {"Futbol", "Volleyball", "Basketball", "Otro"};
	
	for(int i = 0; i < cantEst; i++){
		
		cout << "Nombre: " << nombres[i] << endl;
		cout << "Edad: " << edades[i] << endl;
		cout << "Nota: " << notas[i] << endl;
		cout << "Deporte: " << deportesNombre[deportes[i] - 1];
		
		if(notaMayor < notas[i]){
			notaMayor = i;
		}
		
		if(notas[i] >= 70){
			aprobaron++;
		}
		
		if(deportes[i] == 1){
			futbol++;
		}
		
		cout << endl << endl;
	}
	
	cout << "La nota mayor fue un " << notas[notaMayor] << " de " << nombres[notaMayor] << endl;
	cout << "Aprobaron " << aprobaron << " estudiantes" << endl;
	cout << "A " << futbol << " les gusto el futbol" << endl;
	
	return 0;
}

