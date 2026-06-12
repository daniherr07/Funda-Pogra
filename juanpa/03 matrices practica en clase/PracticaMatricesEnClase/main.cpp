#include<iostream>
using namespace std;

const int Filas = 4;
const int Columnas = 5;

void CalcularSuma(int matriz[Filas][Columnas], int cantFilas, int cantColumnas, int vector[]){
	int suma=0;
	
	for(int i=0; i<cantColumnas-1; i++){
		suma += matriz[i][0]; //suma columna izq
	for(int j=0; j>i; j++){
	}
}
	

int main (int argc, char *argv[]) {

	int matriz[Filas][Columnas]={
	{1,2,3,4,5}, //fila 0
	{6,7,8,9,10},//fila 1
	{1,1,1,1,1},//fila 2
	{2,2,2,2,2},//fila 3  
};

	int vector[5];
	
	
	
	
	
	return 0;
}

