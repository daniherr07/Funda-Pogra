#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	// for, while, do-while
	
//	for(def variable; lim sup; incremento){ haga tal cosa }
	
	//Ejer: Imprimir los numeros del 1 al n;
	
	int n1 = 5;
	
	cout << "Lista con el For" << endl;
	
	for(int i = 1; i <= n1; i++){
		cout << i << endl;
	}
	
	system("pause");
	
	cout << "\nLista con el While" << endl;

//	while(condicion){haga algo}
	
	int contador = 1;
	
	while(contador <= 5){
		cout << contador << endl;
		contador++;
	}
	
	system("pause");
	
	cout << "\nLista con el Do-While" << endl;
	
//	do{haga}while(condicion)
	
	int contador2 = 1;
	
	do{
		cout << contador2 << endl;
		contador2++;
	} while(contador2 <= 5);
	
	
	//Ejer: Imprima los 10 primeros numeros pares;
	system("pause");
	system("cls");
	
	for (int i = 2; i <= 20; i+=2){
		cout << i << endl;
	}
	
	system("pause");
		
	for (int i = 1; i <= 10; i++){
			cout << i*2 << endl;
	}
	
	system("pause");
	system("cls");
	
	// Ejer3: Calcule la suma de los numeros del 1 al 10
	
	int valor = 1;
	int suma = 0;
	
	while(valor < 11){
		suma += valor;
		valor++;
	}
	
	cout << suma << endl;
	
	system("pause");
	system("cls");
	
	//Ejer4: Determine si el numero n es o no un primo;
	
	//chocha
	
	int contador3 = 0;
	int p = 101;
	
	for(int i = 2; i<=p-1; i++){

		
		if (p%i == 0){
			contador++;
		}
		
	}
	
	if(contador3 > 0){
		cout << "No es primo" << endl;
	} else {
		cout << "Es primo" << endl;
	}
	
	system("pause");
	system("cls");
	
	//Forma Optimizada
	
	bool esPrimo = true;
	
	if ( !(p == 2 || p == 3)){
		
		for(int i = 3; i*i<=p; i+=2){ //i*i porque hay un teorema que dice que solo se pueden comprobar los numeros antes de la raiz de p
			
			if (p%i == 0){
				esPrimo = false;
				break;
			}
			
		}
		
		if(esPrimo) {
			cout << "Es primo" << endl;
		} else {
			cout << "No es primo" << endl;
		}
	} else{
		cout << "Es primo" << endl;
	}
	
	
	
	
	return 0;
}

