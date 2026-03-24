#include<iostream>
using namespace std;

bool validar(int valor){
	return valor > 0 && valor <= 20;
}
	
bool menu(){
	char opcion;
	
	cout << "Bienvenido al juego de adivinanza, cuando los dos jugadores esten listos digite la letra J. Para salir, digite S" << endl;
	cin >> opcion;
	
	if(opcion == 'J' || opcion == 'j'){
		return true;
	} else {
		return false;
	}
	
}

void submenu(){
	cout << "A continuacion, se le pide al jugador 1 se acerque a la pantalla y presione cualquier tecla para seguir" << endl;
	system("pause");
	system("cls");
}

void juego(){
	int numeroAdivinar = 1;
	cout << "Por favor que el jugador 1 ingrese el numero a adivinar, este tiene que estar entre 1 y 20" << endl;
	
	cin >> numeroAdivinar;
	
	if(! (validar(numeroAdivinar)) ){
		cout << "Por favor ingrese un numero valido la proxima vez... Por favor reiniciar el juego.";
		return;
	}
	
	system("cls");
	cout << "El numero ha sido ingresado, que el jugador 2 se acerque e intente adivinar el numero" << endl;
	int intentos = 3;
	int numeroIngresado = 1;
	
	bool ganar = false;
	
	do{
		cout << intentos << " intentos restantes" << endl;
		cout << "Ingrese un numero: ";
		
		cin >> numeroIngresado;
		
		cout << endl;
		
		if(numeroIngresado == numeroAdivinar){
			ganar = true;
			break;
		} else {
			intentos--;
		}
		
		
	} while(!(intentos <= 0));
	
	system("cls");
	
	if (ganar){
		cout << "El jugador 2 logro adivinar el numero" << endl;
		cout << "El jugador 2 ha sido el ganador";
	} else {
		cout << "El jugador 2 no logro adivinar el numero" << endl;
		cout << "El jugador 1 ha sido el ganador";
	}
	
}
	
	
int main (int argc, char *argv[]) {
	
	if (menu()){
		submenu();
		juego();
		
		
		cout << endl << endl << "Muchas gracias por jugar. Para jugar otra partida, reinicia el juego";
		
	} else {
		cout << "Saliendo del juego..." << endl;
	}
	
	
	return 0;
}

