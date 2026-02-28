#include<iostream>
#include<math.h> //COMO INCLUIR UNA LIBRERIA
using namespace std;

int main (int argc, char *argv[]) {
	
	int a = 5;
	int b = 3;
	
	a + b; // Suma
	a - b; // Resta
	a * b; // Multiplicación
	a / b; // División
	a % b; // Módulo (Residuo de una división)
	pow(a, b); //Potencia a^b
	pow(2.0, 1.0/3.0); //Raiz (en este caso, raíz cubica de 2)
	log(2) //Logaritmo, creo que base 10, de un numero
	
	cout << "El resultado de la division es: " << (2 ** 3) << endl;
	
	//División decimal;
	float resultado = float(a)/b; //El float convierte el numero a decimal (5 => 5.0)
	
	cout << "El resultado de la division es: " << resultado << endl;
	
	cout << "==============================================================" << endl;
	cout << "||															 ||" << endl;
	cout << "||                           Adios                          ||" << endl;
	cout << "||															 ||" << endl;
	cout << "==============================================================" << endl;
	
	
	return 0;
}

