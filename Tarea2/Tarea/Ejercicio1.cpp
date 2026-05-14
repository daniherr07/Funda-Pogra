#include<iostream>
using namespace std;

bool validar(int numero){
	return numero > 0;
}
	
void solicitarNum(int &aIngresar){
	cout << "Por favor ingrese un numero entero positivo: ";
	cin >> aIngresar;
}
	
int funcionar(){
	int retornar = 1;
	
	do{
		solicitarNum(retornar);
	} while( !(validar(retornar)) );

	
	return retornar;	
}
	
int candLineas(int asteriscos){
	return asteriscos + (asteriscos - 1);
}

string figuraFor(int asteriscos){ 
	
	int filas = candLineas(asteriscos);
	string resultado = "";
	
	for(int i = 1; i <= filas; i++){
		int espacios = abs(i - asteriscos);
		int caracteres = abs(asteriscos - espacios);
		
		for (int j = 1; j <= espacios; j++){
			resultado += " ";
		}
		
		for (int j = 1; j <= caracteres; j++){
			resultado += "*";
		}
		
		resultado += "\n";
	}
	
	return resultado;
}
	
string figuraWhile(int asteriscos){ 
	
	int filas = candLineas(asteriscos);
	string resultado = "";
	
	int contador = 1;
	
	while(contador <= filas){
		
		int espacios = abs(contador - asteriscos);
		int caracteres = abs(asteriscos - espacios);
		
		int contadorEspacios = 1, contadorCaracteres = 1;
		
		while(contadorEspacios <= espacios){
			resultado+= " ";
			
			contadorEspacios++;
		}
		
		while(contadorCaracteres <= caracteres){
			resultado+= "*";
			
			contadorCaracteres++;
		}
		
		resultado += "\n";
		
		contador++;
	}
	
	
	return resultado;
}

int main (int argc, char *argv[]) {
	
	int asteriscos = funcionar();
	cout << figuraFor(asteriscos);
	
	cout << endl << endl;
	
	cout << figuraWhile(asteriscos);
	
	cout << endl << endl;
	
	cout << "La cantidad de lineas impresas son: " << candLineas(asteriscos);

	
	return 0;
}

