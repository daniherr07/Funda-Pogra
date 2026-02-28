#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	/*
						Terminología
		- Instanciar: Se crea la variable en memoria (ej: int num)
		- Inicializar: Se le asigna un valor a la variable (ej: num = 20)
	*/
	
	
	/*			Variables			*/
	
	//***BASICAS O PRIMITIVAS***
	
	//Enteros
	short numShort	= 20;	//Toma valores entre (-2^15, 2^15 - 1)
	int num			= 20;		//Toma valores entre (-2^31, 2^31 - 1)
	long numLong   	= 20L;	//Toma valores entre (-2^63, 2^63 - 1)
	/* Entre mas grande, más espacio en memoria */
	
	//Decimales
	float numFloat   = 3.14f;		//+- 7 cifras significativas (7 cuando es 32bits y 8 cuando es 64 bits)
	double numDouble = 3.14; 	//+- 15 cifras significativas (15 cuando es 32bits y 8 cuando es 64 bits)
	//longDouble existen, pero no nos interesa en este curso
	
	//Texto
	char caracter = 'a'; //se definen con comillas simples
	
	//Booleanas
	bool ok = true;
	bool noOk = false;
	
	cout << "estoy ok " << ok << endl;
	cout << "estoy no ok" << noOk << endl;
	
	
	
	//***NO BASICAS***
	string text;
	
	
	/*			Variables			*/
	const double PI = 3.14;	//Se instancian y se inicializan al mismo tiempo

	
	
	return 0;
}

