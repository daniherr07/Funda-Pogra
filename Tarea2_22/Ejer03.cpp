#include<iostream>
using namespace std;


void mostrar(int vector[], int tam){
	
	for (int i = 0; i < tam; i++){
		cout << vector[i] << endl;
	}
	
	cout << endl << endl;
}
	
void copiarVector(int vectorOrig[], int vectorCopiar[], int tam){
	
	for (int i = 0; i < tam; i++){
		vectorCopiar[i] = vectorOrig[i];
	}
	
}
	
bool esPrimo(int p) {
	
	if (p <= 1) {
		return false;
	}
	
	if (p == 2 || p == 3) {
		return true;
	}
	
	if (p % 2 == 0) {
		return false;
	}
	
	for (int i = 3; i * i <= p; i += 2) {
		
		if (p % i == 0) {
			return false;
		}
	}
	
	return true;
}

int main (int argc, char *argv[]) {
	
	int tamV1 = 3, tamV2 = 5;
	
	int v1[tamV1] = {1,5,9};
	int v2[tamV2] = {2,6,8,10,15};
	
	int tamMay = 0;
	int tamMen = 0;
	
	bool v1Mayor = false;
	bool v2Mayor = false;
	
	if(tamV1 > tamV2){
		tamMay = tamV1;
		tamMen = tamV2;
		
		v1Mayor = true;
	} else {
		tamMay = tamV2;
		tamMen = tamV1;
		
		v2Mayor = true;
	}
	

	//Para v3
	
	int tamV3 = tamV1 + tamV2;
	
	int v3[tamV3];
	
	for(int i=0; i < tamMen; i++){
		v3[i] = v1[i];
	}
	
	for(int i=0; i < tamMay; i++){
		v3[i + tamMen] = v2[i];
	}
	
	mostrar(v3, tamV3);
	
	
	//Para v4
	
	
	int tamV4 = tamV1 + tamV2;
	
	int v4[tamV4];
	
	for(int i = 0; i < tamMen * 2; i++){
		if(i%2 == 0){
			v4[i] = v1[i/2];
		} else {
			v4[i] = v2[i/2];
		}
	}
	
	int restantes = tamMay - tamMen;
	
	if(v1Mayor == true){
		for(int i = tamMen; i < tamMay; i++){
			v4[tamMen * 2 + (i - tamMen)] = v1[i];
		}
	} else {
		for(int i = tamMen; i <= tamMay - 1; i++){
			v4[tamMen * 2 + (i - tamMen)] = v2[i];
		}
	}
	
	mostrar(v4, tamV4);
	
	//Para v5
	
	int tamV5Max = tamMen + tamMay;
	int v5[tamV5Max];
	
	int tamV5 = 0;
	
	for(int i= 0; i < tamV1; i++){
		if (v1[i] % 2 == 0){
			v5[tamV5] = v1[i];
			tamV5++;
		}
	}
	
	for(int i= 0; i < tamV2; i++){
		if (v2[i] % 2 != 0){
			v5[tamV5] = v2[i];
			tamV5++;
		}
	}
	
	mostrar(v5, tamV5);
	
	//Para v6
	
	int tamV6Max = tamMen + tamMay;
	int v6[tamV6Max];
	
	int tamV6 = 0;
	
	for(int i= 0; i < tamV1; i++){
		if (esPrimo(v1[i])){
			v6[tamV6] = v1[i];
			tamV6++;
		}
	}
	
	for(int i= 0; i < tamV2; i++){
		if (esPrimo(v2[i])){
			v6[tamV6] = v2[i];
			tamV6++;
		}
	}
	
	mostrar(v6, tamV6);
	
	//Para v7
	
	int tamV7 = 0;
	int valorMayor = 0;
	
	if (v1Mayor){
		for(int i= 0; i < tamV1; i++){
			if (i != tamV1 && valorMayor < v1[i]){
				valorMayor = v1[i];
			}
		}
	} else {
		for(int i= 0; i < tamV2; i++){
			if (i != tamV2 && valorMayor < v2[i]){
				
				valorMayor = v2[i];
			}
		}
	}
	
	
	tamV7 = valorMayor + 1;
	int v7[tamV7];
	
	for(int i = 0; i <= valorMayor; i++){
		v7[i] = i;
	}
	
	mostrar(v7, tamV7);
	
	//Para v8
	
	int tamV8Max = tamMen + tamMay;
	int v8[tamV8Max];
	int tamV8 = 0;
	
	for(int i = 0; i < tamV3; i++){
		int valor = v3[i];
		bool repite = false;
		
		for(int j = 0; j < tamV3; j++){
			if(valor == v3[j] && j != i){
				repite = true;
				break;
			}
		}
		
		if(repite == false){
			v8[i] = valor;
			tamV8++;
		}
	}
	
	mostrar(v8, tamV8);
	
	
	
	return 0;
}

