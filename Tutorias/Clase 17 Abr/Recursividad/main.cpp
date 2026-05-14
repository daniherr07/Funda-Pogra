#include<iostream>
#include<string>
using namespace std;

int misterio(int n){
	
	if (n==0){
		return 1;
	}
	
	return n* misterio(n-1);
}

int sumaRecursiva(int n){
	
	//El caso mas simple seria sumaRecursiva(0) que  = a 0;
	//Si n == 0 entonces retornaría 0;
	// return 4 + suma(3);
	
	
	if (n==1){
		return 1;
	}
	
	return n + sumaRecursiva(n-1);
}
	
int factorial(int n){
	//Caso base factorial(1) == 1;
	//Caso recursivo = n * factorial(n-1);
	
	
	if (n == 1){
		return 1;
	};
	
	return n * factorial(n-1);
}
	
string voltearString(string texto){
	int longitud = texto.length();
	
	
}
		
int main (int argc, char *argv[]) {
	
	string hola = "Texto";
	
	cout << hola.substr(4);
	
	return 0;
}

