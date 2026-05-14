#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int factoriales = 1;
	
	cout << "Ingrese hasta que numero quiere ver su factorial: ";
	cin >> factoriales;
	
	for(int i = 1; i <= factoriales; i++){
		
		cout << "Factorial de " << i << " = ";
		
		int resultado = 1;
		for(int j = i; j >= 1; j--){
			resultado *= j;
		}
		
		cout << resultado << endl;
	}
	
	return 0;
}

