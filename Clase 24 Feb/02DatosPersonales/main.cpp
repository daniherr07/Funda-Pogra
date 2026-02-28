#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int edad;
	string nombreCompleto;
	
	cout << "Digite su edad: " << endl;
	cin >> edad;
	
	cout << "Digite su nombre completo: " << endl;
	cin.ignore(); //Ignora el último carácter en el buffer. Si se le pasa como parámetro un numero, ignora n cantidad de carácteres en el buffer
	
	getline(cin, nombreCompleto); 
	/*
	cin solo captura hasta que encuentra un " " o un Enter. 
	getline consigue toda la linea, pasandole como parametro cin y una variable string donde guardar los datos
	*/
	

	
	cout << "Su nombre es: " << nombreCompleto << " y su edad es: " << edad;
	
	return 0;
}

