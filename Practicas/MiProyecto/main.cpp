#include<iostream>
using namespace std;

int DeterminaPrecio(int edad, bool tieneCarnet){
	int precio;
	
	if (edad < 4 || edad > 65){
		precio = 0;
	}
	
	if (edad >= 4 && edad <= 18){
		precio = 5000;
	}
	
	if (edad > 18 && edad <= 65){
		precio = 10000;
	}
	
	if (tieneCarnet){
		precio = precio - (precio*0.15);
	}
	
	return precio;
	
}



int main (int argc, char *argv[]) {
	
//	Escribir un programa para una empresa que tiene salas de juegos para todas las edades y 
//	quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar. 
//		
//		El programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. 
//		Si el cliente es menor de 4 años puede entrar gratis
//		Si tiene entre 4 y 18 años debe pagar 5.000
//		Si tiene mas de 18 y  65  tiene que pagar 10.000 
//		Si es mayor de 65 años la entrada es gratis. 
//		
//		Además, si el cliente presenta carné estudiantil recibe un 15% de descuento.
//		
//		Incluya lo siguiente:
//		
//		Función DeterminaPrecio(): recibe por parámetro lo estrictamente necesario para determinar el precio de la entrada, 
//		la función retorna el precio de la entrada.
//		
//		Función Main: lee del usuario los datos del cliente y determina el precio de la entrada de cada uno, 
//		para realizarlo debe llamar a la función anterior.
	
	int edad;
	char aux;
	bool tieneCarnet = false;
	
	cout << "Digite su edad: ";
	cin >> edad;
	
	cout << "\n\nPosee carnet? (Y/N)";
	cin >> aux;
	
	if (aux == 'Y' || aux == 'y'){
		tieneCarnet = true;
	}
	
	system("cls");

	cout << "El precio a pagar es de: " << DeterminaPrecio(edad, tieneCarnet) << endl;
	
	
	
	return 0;
}

