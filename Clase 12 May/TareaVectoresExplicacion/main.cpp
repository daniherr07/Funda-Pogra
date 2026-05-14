#include<iostream>
using namespace std;

void imprimir(int array1[], int tam, int MAX){
	
	if(tam < MAX){
		for (int i = 0; i<tam; i++){
			cout << array1[i] << endl;
		}
		
		cout << endl;
	} else {
		cout << "El tamano no es correcto" << endl;
	}

}
	
// Agregar un valor al final del vector

bool agregarFinal(int array[], int &tam, int valorAgregado, int MAX){
	
	if(tam < MAX){
		array[tam] = valorAgregado;
		tam++;
		return true;
	} else{
		return false;
	}
}
	
// Agregar un valor en una posicion dada
	
bool agregarEnPosicion(int array[], int &tam, int valorAgregado, int posicion, int MAX){
	
	if(tam >= MAX){
		return false;
	}
	
	if(posicion < 0 || posicion >= tam){
		return false;
	}
	
	//Valores despues de la posicion "posicion"
	
	for(int i = tam; i > posicion; i--){
		array[i] = array[i-1];
	}
	
	//En la posicion exacta
	array[posicion] = valorAgregado;
	
	//Valores antes de la posicion
	//No hay que hacerle nada.
	
	tam++;
	
	return true;
}
	
//Eliminar u valor de una posicion dada
bool eliminarEnPosicion(int array[], int &tam, int posicion, int MAX){
	
	if(posicion < 0 || posicion >= tam){
		return false;
	}
	
	//Con los valores que estan despues de "posicion"...

	
	
	for(int i = posicion; i < tam-1; i++){
		array[i] = array[i+1];
	}
	
	//En la posicion exacta
	//Practicamente le pasamos encima
	
	//Valores antes de la posicion
	//No hay que hacerle nada.
	
	tam--;
	return true;
}

int main (int argc, char *argv[]) {
	
	const int MAX = 100;
	
	int array1[MAX] = {1,2,3,4};
	
	int tam = 4;
	
	imprimir(array1, tam, MAX);
	
	agregarFinal(array1, tam, 20, MAX);
	
	imprimir(array1, tam, MAX);
	
	agregarEnPosicion(array1, tam, 50, 1, MAX);
	
	imprimir(array1, tam, MAX);
	
	eliminarEnPosicion(array1, tam, 3, MAX);
	
	imprimir(array1, tam, MAX);
	
	system("cls");
	//Ejercicio 22


	
	int v1[MAX], v2[MAX], v3[MAX], v32[MAX], v4[MAX];
	
	int tamV1 = 0, tamV2 = 0, tamV3 = 0, tamV32 = 0, tamV4 = 0;
	

	// V1 es una copia exacta de V
	
	tamV1 = tam;
	
	
	for (int i = 0; i < tam; i++){
		v1[i] = array1[i];
	}
	
	imprimir(v1, tamV1, MAX);
	
	//V2 son mismos elementos del array1, pero en orden inverso
	
	tamV2 = tam;
	
	for( int i = 0; i < tam; i++){
		v2[i] = array1[tam-1-i];
	}
	
	imprimir(v2, tamV2, MAX);

	//V3 elementos de v que se encuentran en las posiciones pares Opcion1
	
	tamV3 = (tam+1) / 2;
	
	
	for (int i = 0; i < tam; i++){
		
		if (i%2 == 0){
			v3[i/2] = array1[i];
		}
	}
	
	imprimir(v3, tamV3, MAX);
	
	//V3 elementos de v que se encuentran en las posiciones pares Opcion2
	
	
	for (int i = 0; i < tam; i++){
		
		if (i%2 == 0){
			v32[tamV32] = array1[i];
			tamV32++;
		}
	}
	
	imprimir(v32, tamV32, MAX);
	
	return 0;
}

