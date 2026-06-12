#include<iostream>
using namespace std;

const MAXFILAS = 10;
const MAXCOLUMNAS = 10;

bool buscarMatriz(int matriz[MAXFILAS][MAXCOLUMNAS], int cantFilas, int cantColumnas, int valor){
	
	for (int i = 0; i < cantFilas; i++){
		for(int j = 0; j < cantColumnas; j++){
			if(matriz[i][j] == valor){
				return true;
			}
		}
	}
	
	return false;
}

bool buscarMatriz(int matriz[MAXFILAS][MAXCOLUMNAS], int cantFilas, int cantColumnas){
	
	for (int i = 0; i < cantFilas; i++){
		for(int j = 0; j < cantColumnas - 1; j++){

			for(int k = 0; k < cantColumnas-j-1; k++){
				
				if(matriz[i][k] > matriz[i][k+1]){
					int aux = matriz[i][k];
					matriz[i][k] = matriz[i][k+1];
					matriz[i][k+1] = aux;
				}
				
				
			}
			
		}
	}
	
	return false;
}
		
int main (int argc, char *argv[]) {
	
	int matriz[MAXFILAS][MAXCOLUMNAS];
	
	int cantFilas = 0;
	int cantColumnas = 0;
	
	
	return 0;
}

