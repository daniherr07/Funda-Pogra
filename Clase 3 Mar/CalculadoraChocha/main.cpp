#include<iostream>
#include<cmath>

using namespace std;

int main (int argc, char *argv[]) {
	
	cout << "1. Suma" << endl;
	cout << "4. Division" << endl;
	cout << "6. Logaritmo" << endl;
	cout << "10. Tan" << endl;
	
	switch(opcion){
	case 1:
		// Haga la suma
		break;
	case 2:
		// Haga la resta
		break;
		
	//....
	
	default:
		// Haga algo en caso de que no sea ninguna de las opciones
		break;
	
	}
	
	
	int opcion = 10;
	
	/*
	cout << "\n\nDigite la opcion deseada" << endl;
	cin >> opcion;
	*/
	
	if (opcion <= 0 || opcion > 10) {
		cout << "Debe ingresar una opcion valida" << endl;
		return 0;
	}
	
	system("cls");
	
	cout << "Escogio la opcion " << opcion << endl;
	
	int a = 2,b = 3;
	
	/*
	
	cout << "Digite el primer valor: ";
	cin >> a;
	cout << "\nDigite el segundo valor: ";
	cin >> b; 
	
	*/
	
	if (opcion == 1){
		cout << "La suma de " << a << " + " << b << " da: " << a+b << endl;
	}
	
	if(opcio
	

	//
	if (opcion == 4) {
		if (b==0) {
			cout << "Recuerde que la división por cero no existe, salga y vuelva a ejecutar" << endl;
//			return 0;
		} else {
			cout << "La division de " << a << " / " << b << " da: " << double(a)/b << endl;
		}
		
		
	}
	
	
	if (opcion == 6) {
		cout << "El log base " << a << " de " << b << " es: " << log(b) / log(a) << endl;
	}
	
	a = 450;
	
	if (opcion == 7) {
		
		const double PI = 3.14159265;
		
		double aRad = double(a * PI)/180;
		cout << "El seno del angulo " << a << " es: " << sin(aRad) << endl;
	}
	
	if (opcion == 10) {
		
		const double PI = 3.14159265;
		
		if(a%360 == 90 || a%360 == 270) {
			cout << "La tangente de ese angulo no existe" << endl;
			return 0;
		}
		
		double aRad = double(a * PI)/180;
		cout << "El seno del angulo " << a << " es: " << tan(aRad) << endl;
	}

	
	return 0;
}

