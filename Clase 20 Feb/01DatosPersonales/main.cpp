#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	//Las variables se escriben en la parte superior en la función donde está siendo utilizada
	string nombre;
	int edad;
	string apellido1, apellido2, cedula;	
	
	cout << "Como te llamas" << endl;
	cin >> nombre;
	
	cout << "Cual es tu primer apellido" << endl;
	cin >> apellido1;
	
	cout << "Cual es tu segundo apellido" << endl;
	cin >> apellido2;
	
	cout << "en qu" << char(130) << " a" << char(164) << "o naciste: "; //en que año naciste
	cin >> edad;
	
	cout << "Cual es su cedula" << endl;
	cin >> cedula;
	
	cout << "\n\n\nYa se quien eres, eres" << nombre << " y tienes " << edad << "anios"
		
	
	
	return 0;
}

