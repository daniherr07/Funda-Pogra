#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {

	string aux;
	int cantDias = 1000000;
	
	//if(condicion){lo que quiero que haga}
	
	if (cantDias%7 == 0){
		cout << "Si hoy es viernes dentro de " << cantDias << " dias es: " << "viernes" << endl;
	}
	
	if (cantDias%7 == 1){
		cout << "Si hoy es viernes dentro de " << cantDias << " dias es: " << "sabado" << endl;
	}
	
	if (cantDias%7 == 2){
		cout << "Si hoy es viernes dentro de " << cantDias << " dias es: " << "domingo" << endl;
	}
	if (cantDias%7 == 3){
		cout << "Si hoy es viernes dentro de " << cantDias << " dias es: " << "lunes" << endl;
	}
	if (cantDias%7 == 4){
		cout << "Si hoy es viernes dentro de " << cantDias << " dias es: " << "martes" << endl;
	}
	if (cantDias%7 == 5){
		cout << "Si hoy es viernes dentro de " << cantDias << " dias es: " << "miercoles" << endl;
	}
	if (cantDias%7 == 6){
		cout << "Si hoy es viernes dentro de " << cantDias << " dias es: " << "jueves" << endl;
	}

	
	//Dado un número de tres digitos, imprima cada uno de sus digitos por aparte
	
	int numDado = 315;
	
	int centenas,decenas,unidades;
	
	centenas = numDado / 100;
	decenas = (numDado - centenas * 100) / 10;
	unidades = (numDado - centenas * 100 - decenas * 10);
	
	cout << "\n\n\n";
	cout << "centenas: \t" << centenas << endl;
	cout << "decenas: \t" << decenas << endl;
	cout << "unidades: \t" << unidades << endl;
	
	//otra forma
	
	centenas = numDado / 100;
	decenas = (numDado/10)%10;
	unidades = numDado%10;
	
	cout << "\n\n\n";
	cout << "centenas: \t" << centenas << endl;
	cout << "decenas: \t" << decenas << endl;
	cout << "unidades: \t" << unidades << endl;
	
	// actualización de variables;
	
	cout << "\n\nPresione ENTER" << endl;
	getline(cin, aux);
	system("cls");
	
	int x = 5;
	
	cout << "x y valgo: " << x << endl;
	
	x = 20;
	
	cout << "x y valgo: " << x << endl;
	
	x = x + 7; //Aplica para todas las operaciones aritmeticas;
	
	cout << "x y valgo: " << x << endl;
	
	x += 7; //Aplica para todas las operaciones aritmeticas;
	
	cout << "x y valgo: " << x << endl;
	
	cout << "\n\nPresione ENTER" << endl;
	getline(cin, aux);
	system("cls");
	
	//preincremento y postincremento
	
	int a,b;
	a= 5;
	b= ++a; //preincremento 	> primero actualiza "a" y después se lo asigna a "b"
	//b= a++; //postincremento	> primero se lo asigna a "b" y después se lo asigna a "a"
	
	cout << "soy a y valgo: " << a << endl;
	cout << "soy b y valgo: " << b << endl;
	

	//Comparadores
	cout << "\n\nPresione ENTER" << endl;
	getline(cin, aux);
	system("cls");
	
	int z = 8;
	
	if (z >= 0) {
		cout << "z es positivo";
	}
	
	if (z < 0) {
		cout << "z es negativo";
	}
	
	/*
		Comparadores
		> Mayor que
		< Menor que
		>= Mayor o igual que
		<= Menor o igual que
		== Igual que
		
		Conectivas lógicas
		Y = && (a && b)
		O = || (a || b)
		Negación = ! (!a)
	*/
	
	
	
	return 0;
}

