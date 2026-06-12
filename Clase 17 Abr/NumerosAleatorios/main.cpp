#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main (int argc, char *argv[]) {
	srand(time(NULL)); //Semilla con la cual hacemos numeros aleatorios
	
	for(int i = 1; i <= 10; i++){
		cout << i << "--> " << rand() << endl;
	}
	cout << "\n\n\n" << endl;
	// num aleatorioss en un intervalo [0,a]
	
	for(int i = 1; i <= 10; i++){
		cout << i << "--> " << rand()%6 << endl; // en este caso, sería del 0 al 5, el 6 es porque si ponemos 5 nunca va a parecer el 5
	}
	cout << "\n\n\n" << endl;
	
	// num aleatorioss en un intervalo [a,b]
	// rand()%(b-a+1)+a
	// para [2,5];
	// rand()%(5-2+1)+2
	
	for(int i = 1; i <= 10; i++){
		cout << i << "--> " << rand()%(5-2+1)+2 << endl;
	}
	cout << "\n\n\n" << endl;
	
	//numeros decimales [0,1]
	
	for(int i = 1; i <= 10; i++){
		cout << i << "--> " << (double(rand())/RAND_MAX) << endl; // en este caso, sería del 0 al 5, el 6 es porque si ponemos 5 nunca va a parecer el 5
	}
	
	cout << "\n\n\n" << endl;
	
	//numeros decimales [min,max]
	//(double(rand())/RAND_MAX) * (max - min) + min
	
	for(int i = 1; i <= 10; i++){
		cout << i << "--> " << (double(rand())/RAND_MAX * ( 8.2 - 3.4 ) + 3.4) << endl;
	}
	cout << "\n\n\n" << endl;
	
	string texto = "Hola mundo";
	string reemplazo = "XXXXXXXXXX";
	cout << "Original: " << texto << endl;
	texto.replace(5, 3, reemplazo); /*Reemplaza 5 caracteres
	desde la posición 3*/
	cout << "Modificado: " << texto << endl;
	
	
	
	
	
//	
//	system("cls");
//	//Prueba tonta
//	
//	int numero = rand()%(8-2+1)+2;
//	
//	for(int i = 1; i <= 6; i++){
//		int aleatorio= rand()%(8-2+1)+2;
//		
//		if (numero != aleatorio){
//			i = 1;
//			cout << "Error de numero" << endl << endl;
//		}else{
//			cout << numero << "--> " << aleatorio << endl;
//		}
//	}
	
	
	return 0;
}

