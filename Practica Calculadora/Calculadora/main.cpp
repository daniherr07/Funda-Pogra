#include<iostream>
#include<cmath>
using namespace std;

int main (int argc, char *argv[]) {
	const double PI = 3.14159265358979323846;
	
	int x,y;
	int eleccion;
	
	char iTilde = char(161);
	char oTilde = char(162);
	char uTilde = char(163);

	
	cout << "*** CALCULADORA *** \n" << endl;
	
	cout << "Nota: Los n" << uTilde << "meros tienen que ser enteros\n" << endl;
	
	cout << "Ingrese el primer n" << uTilde << "mero 'x': ";
	cin >> x;
	cout << "Ingrese el primer n" << uTilde << "mero 'y': ";
	cin >> y;
	
	system("cls");
	
	cout << "*** CALCULADORA *** \n" << endl;
	cout << "x = " << x << "\t y = " << y << "\n" << endl;
	
	cout << "Escriba el n" << uTilde << "mero de la operaci" << oTilde << "n que desea hacer \n" << endl;
	cout << "1. Suma: x + y" << endl;
	cout << "2. Resta: x - y" << endl;
	cout << "3. Multiplicac" << oTilde << "n: x * y" << endl;
	cout << "4. Divisi" << oTilde << "n decimal: x / y (Devuelve el valor en decimal)" << endl;
	cout << "5. Divisi" << oTilde << "n eucl" << iTilde << "dea: x / y (Devuelve el cociente y el residuo)" << endl;
	cout << "6. Logar" << iTilde << "tmo: log base 'x' con argumento 'y'" << endl;
	cout << "7. Ra" << iTilde << "z: Ra" << iTilde << "z " << iTilde<< "ndice 'x' con radicando 'y'" << endl;
	cout << "8. Seno: sen(x)" << endl;
	cout << "9. Coseno: cos(x)" << endl;
	cout << "10. Tangente: tan(x)" << endl;
	
	cout << "\n";
	
	cin.ignore();
	cin >> eleccion;
	
	system("cls");
	
	cout << "*** CALCULADORA *** \n" << endl;
	cout << "x = " << x << "\t y = " << y << "\n" << endl;
	
	
	//Operación Suma
	if (eleccion == 1){
		cout << "El resultado de la suma " << x << " + " << y << " es: " << (x+y) << endl;
	}

	//Operación Resta
	if (eleccion == 2){
		cout << "El resultado de la resta " << x << " - " << y << " es: " << (x-y) << endl;
	}
	
	//Operación Multiplicación
	if (eleccion == 3){
		cout << "El resultado de la multiplicaci" << oTilde << "n " << x << " * " << y << " es: " << (x*y) << endl;
	}
	
	//Operación División Simple
	if (eleccion == 4){
		if(y == 0) {
			cout << "Error: El denominador no puede ser 0" << endl;
		} else {
			cout << "El resultado de la divisi" << oTilde << "n " << x << " / " << y << " es: " << (float(x)/float(y)) << endl;
		}
	}
	
	//Operación División Euclídea
	if (eleccion == 5){
		if (y==0){
			cout << "Error: El denominador no puede ser 0" << endl;
		} else {
			cout << "El resultado de la divisi" << oTilde << "n " << x << " / " << y << " es: " << endl;
			cout << "Cociente: " << (int(x)/int(y)) << endl;
			cout << "Res" << iTilde << "duo: " << (int(x)%int(y)) << endl;
		}
	}
	
	//Operación Logarítmo
	if (eleccion == 6){
		if (x < 0){
			cout << "Error: La base no puede ser 0 o menor" << endl;
		} else {
			cout << "El resultado del logar" << iTilde << "tmo base " << x << " con argumento " << y << " es: " << (log(y) / log(x)) <<  endl;
		}
		
	}
	
	//Operación Raíz
	if (eleccion == 7){
		if (x < 1) {
			cout << "Error: El " << iTilde << "no puede ser un valor menor que 1" << endl;
		} else {
			if (y < 0){
				cout << "Error: El radicando no puede ser un valor menor que 0" << endl;
			} else {
				cout << "El resultado de la ra" << iTilde << "z con "<< iTilde << "ndice " << x << "y radicando " << y << " es: " << pow(float(y), 1.0/float(x)) <<  endl;
			}
		}
	}
	
	//Operación Seno
	if (eleccion == 8){
		float rad = float(x) * PI / 180.0;
		cout << "El resultado del seno de " << x << " es: " << sin(rad) <<  endl;
	}
	
	//Operación Coseno
	if (eleccion == 9){
		float rad = float(x) * PI / 180.0;
		cout << "El resultado del coseno de " << x << " es: " << cos(rad) <<  endl;
	}
	
	//Operación Tangente
	if (eleccion == 10){
		if (x == 90) {
			cout << "Error: El valor no puede ser 90" << endl;
		} else {
			float rad = float(x) * PI / 180.0;
			cout << "El resultado del tangente de " << x << " es: " << tan(rad) <<  endl;
		}
		
	}
	
	cout << "\n\n";
	cout << "=================================" << endl;
	cout << "||                             ||" << endl;
	cout << "||    " << char(173) << "Gracias por usar!       ||" << endl;
	cout << "||                             ||" << endl;
	cout << "=================================\n" << endl;
	
	cout << "Para volver a usar la calculadora, reinicia el programa" << endl;

	
	
	return 0;
}

