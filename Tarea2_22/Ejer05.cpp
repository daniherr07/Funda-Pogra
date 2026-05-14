#include<iostream>
#include<string>
using namespace std;

void mostrar2(string vector[], int tam){
	
	for (int i = 0; i < tam; i++){
		cout << vector[i] << endl;
	}
	
	cout << endl << endl;
}

void ordenarAlfabeticamente(string array[], int tamano){
	
	int iniciales[tamano];
	
	for (int i = 0; i < tamano; i++){
		string palabra = array[i];
		char caracter = palabra.at(0);
		iniciales[i] = tolower((int)caracter);
		
		
	}
	
	for (int i = 0; i < tamano; i++){
		if (i != tamano - 1){
			if(iniciales[i] > iniciales[i+1]){
				
				int auxInt = iniciales[i];
				iniciales[i] = iniciales[i+1];
				iniciales[i+1] = auxInt;
				
				string aux = array[i];
				array[i] = array[i+1];
				array[i+1] = aux;
			}
			
		}
	}
	
	mostrar2(array, tamano);
}


		

int main (int argc, char *argv[]) {
	int tamano = 4;
	string palabras[tamano] = {"Murciegalo", "efelante", "Guayabana", "quepeno"};
	char vocalesMay[5] = {'A', 'E', 'I', 'O', 'U'};
	char vocalesMin[5] = {'a', 'e', 'i', 'o', 'u'};
	
	
	
	
	int cantLetras = 0;
	int indMayor = 0;
	int cantConsonantes = 0;
	
	for(int i = 0; i < tamano; i++){
		string palabra = palabras[i];
		
		//Palabra mas larga
		if(palabra.length() > cantLetras){
			cantLetras = palabra.length();
			indMayor = i;
		}
		
		
		//consonantes
		bool consonante = true;
			
		for(int j = 0; j < 5; j++){
			if(vocalesMay[j] == palabras[i][-1]){
				consonante = false;
				break;
			}
			
			if(vocalesMin[j] == palabras[i][-1]){
				consonante = false;
				break;
			}
			
		}
		
		if(consonante == true){
			cantConsonantes++;
		}
		
	}
	
	cout << "La cantidad de palabras que terminan en consonante son: " <<cantConsonantes << endl;
	cout << "La palabra mas larga es " << palabras[indMayor] << " con " << cantLetras << " letras" << endl;
	
	cout << "Las palabras ordenadas alfabeticamente serian: " << endl << endl;
	ordenarAlfabeticamente(palabras, tamano);

	
	return 0;
}

