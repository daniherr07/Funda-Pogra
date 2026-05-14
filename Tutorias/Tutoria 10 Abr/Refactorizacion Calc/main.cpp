#include<iostream>
using namespace std;

double suma (double a, double b){
	return a+b;
}
	
double resta (double a, double b){
	return a-b;
}
	
double multiplicacion (double a, double b){
	return a-b;
}
	
double division (double a, double b){
	
	if (b==0){
		cout << endl << "No se puede dividir entre 0" << endl;
		return 0;
	}
	
	return a/b;
}

int main (int argc, char *argv[]) {
	
	double a = 0.0, b= 0.0;
	int opcion = 0;
	bool reintentar = true;
	char aux;
	
	do{
		
		
		
		cout << "Calculadora Basica" << endl;
		cout << "Ingrese el primer numero: ";
		cin >> a;
		
		cout << endl << "Ingrese el segundo numero: ";
		cin >> b;
		
		cout << endl << endl;
		
		cout << "1. Suma" << endl << "2.Resta" << endl << "3.Multiplicacion" << endl << "4.Division" << endl;
		cout << endl << "Ingrese cualquier otro caracter para salir" << endl;
		
		cout << "Elija una opcion: ";
		cin >> opcion;
		
		switch(opcion){
		case 1:
			cout << suma(a,b);
			break;
		case 2:
			cout << resta(a,b);
			break;
		case 3:
			cout << multiplicacion(a,b);
			break;
		case 4:
			cout << division(a,b);
			break;
		default:
			return 0;
		}
		
		
		cout << endl << endl;
		
		cout << "Para volver a utilizarla, ingrese 'Y'. Para salir, ingrese cualquier otro caracter" << endl;
		cin >> aux;
		system("cls");
		
		if(aux == 'Y'){
			reintentar = true;
		} else {
			reintentar = false;
		}
		
		
		
	} while(reintentar == true);
	
	
	
	return 0;
}

