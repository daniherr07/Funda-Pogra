#include<iostream>
using namespace std;

const int Filas = 10;
const int Columnas = 10;

//agregar filas al final
void agregarFilasAlFinal(int matriz[Filas][Columnas], int &cantFilas, int cantColumnas){
	
	if(cantFilas<Filas){ //si se puede aun agregar una fila, se le agrega
	
		for(int j=0; j<cantColumnas; j++){ //este for agrega una fila
		matriz[cantFilas][j]=0;
		}
		
		cantFilas++; //agrega una
	}
	
}

	//agregar fila en una posicion dada
void agregarFilas(int matriz[Filas][Columnas], int &cantFilas, int cantColumnas, int posicion){
	
	if(cantFilas<Filas && posicion>0 && posicion < cantFilas){ //el numero que sea posicion mayor a 0 y menor a la cantidad de filas maximo
		
		for(int i=cantFilas; i>posicion; i--){ //este for corre las filas hacia la ultima posicion 
			for(int j=0; j<cantColumnas; j++){
				matriz[i][j]=matriz[i-1][j];	
			}
		}
		
		for(int j=0; j<cantColumnas; j++){//este for agrega la fila nueva despues de haber movido primero las filas ya puestas
			matriz[posicion][j]=0;
			}
		cantFilas++;
		}
	}
	
	//eliminar la ultima fila
void eliminarUltimaFila(int matriz[Filas][Columnas], int &cantFilas, int cantColumnas){
	
	if(cantFilas>0){//se pregunta si es mas grande que la cantidad de filas minima, osea 0
		for(int j=0; j<cantColumnas; j++){ //aqui se limpian todas las columnas, *para mas fino el trabajo se pone este for*
			matriz[cantFilas][j]=0;
		}
		cantFilas--; //elimina la ultima fila 
	}
}

//eliminar fila en una posicion	
void eliminarUltimaFila(int matriz[Filas][Columnas], int &cantFilas, int cantColumnas, int posicion){
	
	if(cantFilas<Filas && posicion>=0 && posicion < cantFilas){//se pregunta para borrar cualquiera o la cero
		
		for(int i=posicion; i<cantFilas; i++){
			for(int j=0; j<cantColumnas; j++){
				matriz[i][j]=matriz[i+1][j];
			}
		}
		cantFilas--;
	}
	
}
	

int main (int argc, char *argv[]) {
	
	int matriz[Filas][Columnas];
	
	int CantFilas;
	int CantColumnas;
	
	return 0;
}

*/
