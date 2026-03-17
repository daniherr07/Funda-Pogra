#include<iostream>
#include<string>
using namespace std;

string saludar(){
	return "hola";
}

	
string despedirse(){
	return "adios tonotos";
}
	
void saludar2(){
	cout << "Hola 2" << endl;
}
	
void espacio(){
	cout << endl << endl << endl;
}
	
void despedirse2(){
	cout << "adios tonotos" << endl;
}

int nuevoValor(int x){
	x = 32;
	return x;
}
	
int cambiarValor(int &x){
	x = 50;
	return x;
}
	
int sumar(int a, int b){
	int resultado = a + b;
	return resultado;
}
	
int sumar2(int a, int b, int &c){
	c = a + b;
	return c;
}

string potenciaNatural(int a, int b){
	
	if (a == 0 && b == 0){
		return "indefinido";
	}
	
	if (a== 0 && b== 0){
		return to_string(0);
	}
	
	if (a != 0 && b== 1){
		return to_string(a);
	}
	
	if (a != 0 && b== 0){
		return to_string(1);
	}
	
	if (a != 0 && b != 0){
		int potencia = 1;
		
		for(int i = 1; i <= b; i++){
			potencia = potencia * a;
		}
		
		return to_string(potencia);
	}
	
	return "termine";
}
	
int main (int argc, char *argv[]) {
	
	//Ejemplo 1
	
	saludar2();
	
	espacio();
	
	despedirse2();
	
	system("cls");
	
	//Ejemplo 2 cambiar valor
	
	int x = 20;
	
	cout << "soy x y valgo" << x << endl;
	
	cout << "soy x y valgo" << nuevoValor(x) << endl;
	
	cout << "soy x y valgo" << x << endl;
	
	system("cls");
	
	cout << "soy x y valgo: " << x << endl;
	cout << "soy la referencia x y valgo: " << &x << endl;
	cout << "soy x y valgo: " << cambiarValor(x) << endl;
	
	system("cls");
	
	//Ejemplo 3: Sumar 2 valores
	
	int a = 5;
	int b = 8;
	int resultado = 0;
	
	cout << "La suma da: " << sumar(a, b) << endl;
	
	cout << "La suma2 da: " << sumar2(a, b, resultado);

	system("cls");
	
	//Ejemplo 4: Potencia de dos numeros naturales;
	
	
	cout << potenciaNatural(2, 3);
	
	return 0;
}

