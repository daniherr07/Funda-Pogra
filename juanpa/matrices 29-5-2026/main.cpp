#include<iostream>
using namespace std;

//para un vector: const int tam = 100;
const int filas =10;
const int columnas =10;

void inicializar(int matriz[filas][columnas]){
	for(int i=0; i< filas; i++){
		for(int j=0;j<columnas; j++){
			matriz[i][j]=0;
		}
	}
}		

void llenar(int matriz[filas][columnas], int cantFilas, int cantColumnas){
	for(int i=0; i< cantFilas; i++){
		for(int j=0;j<cantColumnas; j++){
			cout<< "Digite el valor de la matriz en la casilla ("<<i<<","<<j<<")\n";;
			cin>> matriz[i][j];
		}
	}
}		
//este no es necesario dijo johnny
	void imprimir(int matriz[filas][columnas], int cantFilas, int cantColumnas){
		for(int i=0; i< cantFilas; i++){
			for(int j=0;j<cantColumnas; j++){
				cout<< matriz [i][j]<<" ";
			}
			cout << endl;
		}
		cout << "\n\n\n";
	}		


	void intercambioFilas(int matriz[filas][columnas], int cantFilas, int cantColumnas, int fila1, int fila2){
		int aux =0;//sirve para poder cambiar las variables de filas
		if(fila1<cantFilas && fila2<cantFilas){
			for(int j=0;j< cantColumnas; j++){
				aux= matriz[fila2][j];
				matriz[fila2][j]=matriz[fila1][j];
				matriz[fila1][j]=aux;
			}
			
			
			
		}else{
			cout<< "Alguna delas filas no corresponde a un rango valido" << endl;
		}
	}
		
		
		
	int sumaPeriferia(int matriz[filas][columnas], int cantFilas, int cantColumnas){//sumar valores de los bordes	
		//primero sumas las filas de arriba y abajo, lineas continuas
		int suma= 0;
		
		//if()
		for(int j=0; j<cantColumnas; j++){
			suma += matriz[0][j]; //se sumo la fila de arriba
		}
		for(int j=0; j<cantColumnas; j++){
			suma += matriz[cantFilas-1][j]; //se sumo la fila de abajo
		}
		for(int i=1; i<cantFilas-1; i++){
			suma += matriz[i][0]; //suma fila izq
			suma += matriz[i][cantFilas-1]; //suma fila dere	
		}
		return suma;
	}
		
		
int main (int argc, char *argv[]) {
	
	//para un vector: int matriz[tam];
	
	//para una matriz: int matriz1[filas][columnas]; 
	
	//m=n matriz es cuadrada
	int matriz1[filas][columnas]; //matriz 10x10
	int matriz2[filas][columnas]={
		{1,2,3},
		{4,5,6}
	};
	
	inicializar(matriz1);
	imprimir (matriz1, filas, columnas);
	
	int cantFilas =0;
	int cantColumnas=0;
	
	cout<<"Digite la cantidad de filas de la matriz: \n"<< endl;
	cin>> cantFilas;
	
	cout<<"Digite la cantidad de columnas de la matriz: \n"<< endl;
	cin>> cantColumnas;
	
	llenar(matriz1, cantFilas, cantColumnas);
	cout << endl;
	imprimir(matriz1, cantFilas, cantColumnas);
	
	
	//intercambioFilas(matriz1, cantFilas, cantColumnas,2,4);
	//imprimir(matriz1, cantFilas, cantColumnas);
	
	
	cout << sumaPeriferia(matriz1, cantFilas, cantColumnas);
		
		
	return 0;
}
*/
