#include<iostream>
using namespace std;

	/*
	Arreglo rectangular de un mismo tipo de dato

	-------------------
	| a11 a12 a13 a1n |
	|				  |
	| a21 a22 a23 a2n |
	|				  |
	| am1 am2 am3 amn |
	-------------------

	Matriz m x n
	Mate = Del 1 al n
	Progra = Del 0 al n

	La diagonal que empieza desde arriba a la izquierda hasta abajo a la derecha
	se le llama "Diagonal" o "Diagonal Principal"
	*/

const int filas = 10;
const int columnas = 10;



void inicializar(int matriz[filas][columnas]){
	
	
	for(int i = 0; i < filas; i++){
		for (int j=0; j < columnas; j++){
			matriz[i][j] = 0;
		}
	}
}
	
void llenar(int matriz[filas][columnas], int cantFilas, int cantColumnas){
	
	
	for(int i = 0; i < cantFilas; i++){
		for (int j=0; j < cantColumnas; j++){
			
			cout << "Digite el valor de la matriz en la cassila ( " << i << ", " << j << " )\t";
			cin >> matriz[i][j];
		}
	}
}
	
void imprimir(int matriz[filas][columnas], int cantFilas, int cantColumnas){
	
	
	for(int i = 0; i < cantFilas; i++){
		for (int j=0; j < cantColumnas; j++){
			
			cout << matriz[i][j] << "  ";
		}
		cout << endl;
	}
	
	cout << "\n\n\n";
}

void intercambioFilas(int matriz[filas][columnas], int cantFilas, int cantColumnas, int fila1, int fila2){
	int aux = 0;
	if(fila1 < cantFilas && fila2 < cantFilas){
		
		for(int j = 0; j < cantColumnas; j++){
			aux = matriz[fila2][j];
			matriz[fila2][j] = matriz[fila1][j];
			matriz[fila1][j] = aux;
		}
		
	} else {
		cout << "Alguna de las filas no corresponde a un rango valido";
	}
}
	
int sumarPeriferia(int matriz[filas][columnas], int cantFilas, int cantColumnas){
	int sumatoria = 0;
	
	for(int j = 0; j < cantColumnas; j++){
		sumatoria += matriz[0][j];
	}
	
	for (int j = 0; j < cantColumnas; j++){
		sumatoria += matriz[cantFilas-1][j];
	}
	
	for(int i = 1; i < cantFilas -1; i++){
		sumatoria += matriz[i][0];
		sumatoria += matriz[i][cantColumnas-1]	
	}
	
	return sumatoria;
}
	
	
	
	
	
	
	
	
	
	
	
	
int main (int argc, char *argv[]) {

	
	int matriz1[filas][columnas];
	int matriz2[filas][columnas] = {
		{1,2,3},
		{4,5,6}
	};
	
	inicializar(matriz1);
	imprimir(matriz1, filas, columnas);
	
	int cantFilas = 0, cantColumnas = 0;
	
	cout << "Digite la cantidad de filas de la matriz" << endl;
	cin >> cantFilas;
	
	cout << endl << endl;
	
	cout << "Digite la cantidad de columnas de la matriz" << endl;
	cin >> cantColumnas;
	
	llenar(matriz1, cantFilas, cantColumnas);
	
	imprimir(matriz1, cantFilas, cantColumnas);
	
	//intercambioFilas(matriz1, cantFilas, cantColumnas, 2, 4);
	
	//imprimir(matriz1, cantFilas, cantColumnas);
	
	cout << sumarPeriferia(matriz1, cantFilas, cantColumnas);
	
	return 0;
}

