#include<iostream>
#include<string>
using namespace std;

bool validar(int n, int m){
	bool resultado = true;
	
	if((n <= 0 || m <= 0) || (n>m)){
		resultado = false;
	}
	
	return resultado;
}
	
string produto(int n, int m){
	int resultado = 1;
	
	for(int i = n; i <= m; i++){
		resultado *= i;
	}
	
	return to_string(resultado);
}
	

int main (int argc, char *argv[]) {
	
	int n = 1, m = 1;
	cout << "Ingrese el primer valor: ";
	cin >> n;
	
	cout << endl;
	
	cout << "Ingrese el segundo valor: ";
	cin >> m;

	while(!(validar(n, m))){ //Aquí le ponemos diferente para validar si hay error
		cout << "El primer valor tiene que ser menor que el segundo y ambos diferentes de 0, vuelve a ingresarlos" << endl;
		
		cout << "Ingrese el primer valor: ";
		cin >> n;
		
		cout << endl;
		
		cout << "Ingrese el segundo valor: ";
		cin >> m;
	}
	
	cout << "El producto de la multiplicacion del intervalo " << n << " hasta " << m << " = " << produto(n, m); 
	
	
	return 0;
}

