#include<iostream>
#include<cmath>
#include<string>
using namespace std;

//Verifica que los digitos del numero no se excedan de la base
bool verificarDigitos(int num, int base){
	int posicion = 1; 
	int digitos = 1;
	
	if(num < 10){
		if(num >= base){
			return false;
		}
	}
	
	while(true){
		
		if(num / posicion == 0){ //Primero verificamos que podemos sacar el digito
			break;
		}
		
		int digito = (num / posicion) % 10; //Sacamos la parte entera, dejando de ultimo digito el que queremos comprobar y después lo obtenemos con modulo;
		
		if(digito >= base){
			return false;
		}
		
		posicion *= 10;
		digitos++;
	}
	
	return true;
	
}
	

//Cuenta los digitos de un numero en una base
int contarDigitos(int num, int base){
	int posicion = 1; 
	int digitos = 1;
	
	if(num < 10){
		return digitos;
	}
	
	//Va sacando cada posicion yendo de 10 a 100 a 1000...
	while(true){
		if(num / posicion == 0){ //Primero verificamos que podemos sacar el digito
			break;
		}
		posicion *= 10;
		digitos++;
	}
	
	return digitos - 1;
}
	



bool validarNum(int num){
	return num > 0;
}
	

bool validarBase(int base){
	return base > 1 && base <= 10;
}
	
void ingresarEntero(int &num){
	do{
		cout << "Ingrese un numero entero mayor que 0: " << endl;
		cin >> num;
	} while(validarNum(num) == false);
}


void ingresarBase(int &base){
	do{
		cout << "Ingrese una base mayor que 1 y menor o igual que 10: " << endl;
		cin >> base;
	} while(validarBase(base) == false);
}
	
int numABase10(int num, int base){
	
	if (base == 10){
		return num;
	}
	
	int posicion = 1, resultado = 0, contador = 0; 
	
	if(num < 10){
		return num;
	}
	
	while(true){
		
		if(num / posicion == 0){ //Primero verificamos que podemos sacar el digito
			break;
		}
		
		int digito = (num / posicion) % 10; //Sacamos la parte entera, dejando de ultimo digito el que queremos comprobar y después lo obtenemos con modulo;
	
		resultado += digito * (pow(base, contador)); 
			
		contador++;
		posicion *= 10;
	}
	
	return resultado;
	
	
}
	
	
	

int base10aBaseN(int numBase10, int base){
	string resultado = "";
	
	int dividendo = numBase10;
	
	while(true){
		int residuo = dividendo%base;
		resultado = to_string(residuo) + resultado;
		int ultimoCociente = dividendo / base;
		
		
		if(ultimoCociente < base){
			resultado = to_string(ultimoCociente) + resultado;
			break;
		} else {
			dividendo = ultimoCociente;
		}
		
		
	}
	
	return stoi(resultado); //Convertimos nuestro string a integer
}
	

void convertirBaseMBaseN(int num, int baseM, int baseN){
	int numEnBase10 = 1, numABaseN = 1;
	
	cout << num << " en base " << baseM << " tiene " << contarDigitos(num, baseM) << " digitos" << endl;
	
	numEnBase10 = numABase10(num, baseM);
	
	if(verificarDigitos(numEnBase10, 10) == false){
		cout << "Hubo un error en el sistema, por favor reintentar";
		return;
	}
	
	
	numABaseN = base10aBaseN(numEnBase10, baseN);
	
	cout << numABaseN << " en base " << baseN << " tiene " << contarDigitos(numABaseN, baseN) << " digitos" << endl;
	
	if(verificarDigitos(numABaseN, baseN) == false){
		cout << "Hubo un error en el sistema, por favor reintentar";
		return;
	}
	
	cout << "El numero convertido equivale a: " << numABaseN;
}


int main(int argc, char *argv[]) {
	
	//Aclaracion: En el ejercicio dice de base n (original) y después base m (a convertir). Pero me da TOC que no esté
	//en orden alfabetico, así que por eso defino la base m como la original y la n como a la que vamos a convertir.
	//Muchas gracias :)
	
	
	int num = 1, baseM = 1, baseN = 1;
	bool errorContabilizar = false;
	do{
		if(errorContabilizar){
			cout << "Error, los digitos del entero son incoherentes a la base. Reintentelo" << endl;
		}
		
		ingresarEntero(num);
		cout << "Base del entero: ";
		ingresarBase(baseM);
		
		cout << "Base a convertir: ";
		ingresarBase(baseN);
		
		errorContabilizar = true;
		system("cls");
	} while(verificarDigitos(num, baseM) == false);
	
	cout<< "Entero: " << num << "\t|\t" << "Base Original: " << baseM << "\t|\t" << "Base a Convertir: " << baseN << endl << endl;
	convertirBaseMBaseN(num, baseM, baseN);
	
	return 0;
}
