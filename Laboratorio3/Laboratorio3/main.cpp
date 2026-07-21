#include<iostream>
#include<cstdlib> //Es la libreria estandar de c++
#include<ctime>
#include<vector> //No me acuerdo :D 
using namespace std;

const int MAXDIAS = 30;
const int MAXATR = 50;

void imprimirMatriz(int matriz[MAXATR][MAXDIAS], int dias, int atr){
	
	cout << endl << "Cada fila representa la atraccion y cada columna el dia"<< endl << endl;
	for(int i = 0; i < atr; i++){
		for(int j = 0; j < dias; j++){
			cout << "\t" << matriz[i][j];
		}
		
		cout << endl;
	}
	cout << endl << endl;
	
}


void mostrarVector(int visitantes[], int atr){
	for(int i = 0; i < atr; i++){
		cout <<"Atraccion " << i +1 <<": " << visitantes[i] << endl;
	}
	cout << endl;
}

void rellenar(int matriz[MAXATR][MAXDIAS], int dias, int atr){
	for(int i = 0; i < atr; i++){
		for(int j = 0; j < dias; j++){
			matriz[i][j] = rand()%(300 - 20 + 1) + 20;
		}
	}
}
	
int diaMayor(int matriz[MAXATR][MAXDIAS], int dias, int atr){
	int mayor = 0, sumatoriaMayor = 0;
	
	for (int j = 0; j < dias; j++){
		int sumatoriaTemp = 0;
		
		for(int i = 0; i < atr; i++){
			sumatoriaTemp += matriz[i][j];
			
			if(sumatoriaTemp > sumatoriaMayor){
				sumatoriaMayor = sumatoriaTemp;
				mayor = j;
			}
		}
	}
	
	return mayor;
}

void visitantesTotales(int matriz[MAXATR][MAXDIAS], int visitantes[], int dias, int atr){
	for(int i = 0; i < atr; i++){
		int aux = 0;
		for(int j = 0; j< dias; j++){
			aux += matriz[i][j];
		}
	
		visitantes[i] = aux;
	}
}
	

int main (int argc, char *argv[]) {
	srand(time(NULL));
	int matriz_visitantes[MAXATR][MAXDIAS];
	int visitantes_totales[MAXATR];
	
	int cantDias = 0, cantAtr = 0;
	
	cout << "Ingrese la cantidad de dias (Max 30)"<< endl;
	cin >> cantDias;
	cout << "Ingrese la cantidad de atracciones (Max 50)" << endl;
	cin >> cantAtr;
	
	//Para que no hayan negativos. Porque el usuario es estupido
	
	if((cantDias < 0 || cantDias > 30) || (cantAtr < 0 || cantAtr > 50)){
		cout << "Cantidad invalida, intentalo de nuevo" << endl;
		return 0;
	}
	
	rellenar(matriz_visitantes, cantDias, cantAtr);
	
	while(true){
		int opcion = 0;
		
		cout << "||\tRegistro Balneario\t||" << endl;
		cout << "1. Dia con mas visitantes" << endl;
		cout << "2. Visitantes totales por atraccion" << endl;
		cout << "3. Salir" << endl;
		
		cin >> opcion;
		
		if (opcion == 1){
			cout << "El dia con mas visitantes es el: " << diaMayor(matriz_visitantes, cantDias, cantAtr) + 1;
			
			imprimirMatriz(matriz_visitantes, cantDias, cantAtr);
		}
		
		if (opcion == 2){
			visitantesTotales(matriz_visitantes, visitantes_totales, cantDias, cantAtr);
			
			cout << "La cantidad de visitantes por dia son los siguientes: " << endl << endl;
			
			mostrarVector(visitantes_totales, cantAtr);
		}
		
		if (opcion == 3){
			return 0;
		}
	}
	

	
	return 0;
}

