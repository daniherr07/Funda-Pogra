#include<iostream>
using namespace std;

const int FILAS = 10; //Normalmente se inicializa en 100
const int COLUMNAS = 10; //Normalmente se inicializa en 100


void inicializar(int matriz[FILAS][COLUMNAS], int cantFilas, int cantColumnas){
	
	for(int i = 0; i < cantFilas; i++){
		for (int j = 0; j < cantColumnas; j++){
			matriz[i][j] = 0;
		}
	}
}
	
void imprimir(int matriz[FILAS][COLUMNAS], int cantFilas, int cantColumnas){
	cout << "  Filas: " << cantFilas << "\tColumnas: " << cantColumnas << endl;
	
	for(int i = 0; i < cantFilas; i++){
		cout << "\t";
		for (int j = 0; j < cantColumnas; j++){
			cout << matriz[i][j] << " ";
		}
		
		cout << endl;
	}
	
	cout << endl << endl << endl;
}

void agregarFilaAlFinal(int matriz[FILAS][COLUMNAS], int &cantFilas, int cantColumnas){
	
	if (cantFilas < FILAS){
		
		for (int j = 0; j < cantColumnas; j++){
			matriz[cantFilas][j] = 0;
		}
		cantFilas++;
	}
	
	
}
	
void agregarFilaPosDada(int matriz[FILAS][COLUMNAS], int &cantFilas, int cantColumnas, int pos){
	
	if (cantFilas < FILAS && pos > 0 && pos < cantFilas){
		
		for (int i = cantFilas; i > pos; i--){
			for (int j = 0; j < cantColumnas; j++){
				matriz[i][j] = matriz[i-1][j];
			}
		}
		
		for (int j = 0; j < cantColumnas; j++){
			matriz[pos][j] = 1;
		}
		cantFilas++;
	}
	
	
}
	
void eliminarUltimaFila(int matriz[FILAS][COLUMNAS], int &cantFilas, int cantColumnas){
	
	if (cantFilas > 0){
		for (int j = 0; j < cantColumnas; j++){
			matriz[cantFilas][j] = 0;
		}
		cantFilas--;
	}
	
	
}
	
void eliminarFilaPosDada(int matriz[FILAS][COLUMNAS], int &cantFilas, int cantColumnas, int pos){
	
	if (cantFilas >= 0 && pos >= 0 && pos < cantFilas){
		for (int i = pos; i < cantFilas; i++){
			for (int j = 0; j < cantColumnas; j++){
				matriz[i][j] = matriz[i+1][j];
			}
		}
		cantFilas--;
	}
	
	
}
	
void agregarColAlFinal(int matriz[FILAS][COLUMNAS], int cantFilas, int &cantColumnas){
	
	if (cantColumnas < COLUMNAS){
		
		for (int i = 0; i < cantFilas; i++){
			matriz[i][cantColumnas] = 0;
		}
		cantColumnas++;
	}
	
	
}

void agregarColPosDada(int matriz[FILAS][COLUMNAS], int cantFilas, int &cantColumnas, int pos){
	
	if (cantColumnas < COLUMNAS && pos > 0 && pos < cantColumnas){
		
		for (int j = cantColumnas; j > pos; j--){
			for (int i = 0; i < cantFilas; i++){
				matriz[i][j] = matriz[i][j-1];
			}
		}
		
		for (int i = 0; i < cantFilas; i++){
			matriz[i][pos] = 1;
		}
		cantColumnas++;
	}
	
	
}

void eliminarUltimaCol(int matriz[FILAS][COLUMNAS], int cantFilas, int &cantColumnas){
	
	if (cantColumnas > 0){
		for (int i = 0; i < cantFilas; i++){
			matriz[i][cantColumnas] = 0;
		}
		cantColumnas--;
	}
	
	
}

void eliminarColPosDada(int matriz[FILAS][COLUMNAS], int cantFilas, int &cantColumnas, int pos){
	
	if (cantColumnas >= 0 && pos >= 0 && pos < cantColumnas){
		
		for (int j = pos; j < cantColumnas; j++){
			for (int i = 0; i < cantFilas; i++){
				matriz[i][j] = matriz[i][j+1];
			}
		}
		cantColumnas--;
		
	}
	
	
}

	
	

int main (int argc, char *argv[]) {
	
	int matriz[FILAS][COLUMNAS];
	
	int cantFilas = 7;
	int cantColumnas = 7;
	
	inicializar(matriz, cantFilas, cantColumnas);
	
	imprimir(matriz, cantFilas, cantColumnas);
	
	agregarFilaAlFinal(matriz, cantFilas, cantColumnas);
	
	imprimir(matriz, cantFilas, cantColumnas);
	
	agregarFilaPosDada(matriz, cantFilas, cantColumnas, 4);
	
	imprimir(matriz, cantFilas, cantColumnas);
	
	eliminarUltimaFila(matriz, cantFilas, cantColumnas);
	
	imprimir(matriz, cantFilas, cantColumnas);
	
	eliminarFilaPosDada(matriz, cantFilas, cantColumnas, 4);
	
	imprimir(matriz, cantFilas, cantColumnas);
	
	agregarColAlFinal(matriz, cantFilas, cantColumnas);
	
	imprimir(matriz, cantFilas, cantColumnas);
	
	agregarColPosDada(matriz, cantFilas, cantColumnas, 4);
	
	imprimir(matriz, cantFilas, cantColumnas);
	
	eliminarUltimaCol(matriz, cantFilas, cantColumnas);
	
	imprimir(matriz, cantFilas, cantColumnas);
	
	eliminarColPosDada(matriz, cantFilas, cantColumnas, 4);
	
	imprimir(matriz, cantFilas, cantColumnas);

	
	
	
	return 0;
}

