#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	// Dado un valor n imprima la tabla de multiplicar de dicho valor
	
	int n = 5;
	

	
	// Ejer: Imprima las tablas de multiplicar de 1 al n
	
	//X * Y
	
	for (int j = 1; j <= n; j++){ // j = x
		
		cout << "\t--- Tabla del " << j << " ---" << endl;
		
		for(int i = 1; i<=10; i++){ // i = y
			cout << j << "*" << i << "\t = \t" << j*i << endl;
		}
		
		cout << endl << endl;
	}
	
	system("pause");
	system("cls");
	
	cout << "\n\n\n";
	cout << "Primera forma (Re-cho)\n";
	
	cout << "****" << endl;
	cout << "****" << endl;
	cout << "****" << endl;
	cout << "****" << endl;
	
	cout << "\n\n\n";
	cout << "Segunda Forma (-cho)\n";
	
	for(int i = 1; i <= 4; i ++) {
		cout << "****" << endl;
	}
	
	cout << "\n\n\n";
	cout << "Tercera Forma \n";
	
	for(int i = 1; i <= 4; i ++) { 	// Controla la cantidad de renglones
		for (int j = 1; j <= 4; j++) {	//Controla la cantidad de * por renglon
			cout << "*";
		}
		cout << endl;
	}
	
	system("pause");
	system("cls");
	
	
	// Ejer triangulo
	
	for(int i = 1; i <= 4; i++){	// Cantidad de renglones
		for(int j = 4; j >= i ; j--){	//Cantidad de *
			cout << "* ";
		}
		
		cout << endl;
	}
	
	cout << "\n\n";
	
	for(int i = 0; i <= 3; i++){	// Cantidad de renglones
		for(int j = 1; j <= 4-i ; j++){	//Cantidad de *
			cout << "* ";
		}
		
		cout << endl;
	}
	
	cout << "\n\n";
		
	for(int i = 1; i <= 4; i++){	// Cantidad de renglones
		for(int j = 1; j <= 5-i ; j++){	//Cantidad de *
			cout << "* ";
		}
		
		cout << endl;
	}
	
	
	
	return 0;
}

