#include<iostream>
using namespace std;

int cuadrado(int numero){
	return numero*numero;
}

int cubo(int &numero){
	return numero*numero*numero;
}
	
	
int main (int argc, char *argv[]) {
	
	int filas = 1;
	cout << "Cuantas filas va a tener la tabla?" << endl;
	cin >> filas;
	
	cout << endl << endl;
	
	cout << "  num\t | \tcuadrado | \tcubo" << endl;
	for (int i = 1; i <= filas; i++){
		cout << "    " << i << "\t | \t" << cuadrado(i) << "\t | \t" <<cubo(i) << endl; 
	}
	
	return 0;
}

