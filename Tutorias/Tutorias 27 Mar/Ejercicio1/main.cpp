#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	int asteriscos = 1;
	
	cout << "Ingrese la cantidad de filas: ";
	cin >> asteriscos;
	
	cout << endl;
	
	for (int i = 1; i <= asteriscos; i++){
		
		for(int j = 1; j<= i; j++){
			cout << "*";
		}
		
		cout << endl;
		
	}
	
	return 0;
}

