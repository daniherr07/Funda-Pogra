#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	int tabla = 1;
	
	cout << "Ingrese hasta que numero quiere ver las tablas: ";
	cin >> tabla;
	
	for (int i = 1; i <= tabla; i++){
		for(int j = 1; j <= 12; j++){
			cout << i << " * " << j << " = " << i*j << endl;
		}
		
		cout << endl;
	}
	
	return 0;
}

