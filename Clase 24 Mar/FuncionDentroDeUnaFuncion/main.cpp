#include<iostream>
#include<string>
using namespace std;

bool validar(int a){
	return a > 0;
}


void imprimirMulti6(int limite){
	
	if (validar(limite)){
		for (int i = 6; i <= limite; i+=6){
			
			cout << i << endl;
		}
		
//		for (int i = 1; i <= limite; i++){
//			
//			if (i % 6 == 0) {
//				cout << i << endl;
//			}
//			
//		}
	} else {
		cout << "Numero invalido" << endl;
	}
	

}
	
string imprimirMulti6V2(int limite){
	string resultado = "";
	if (validar(limite)){
		for (int i = 6; i <= limite; i+=6){
			resultado += to_string(i) + "\n";
		}
		
		//		for (int i = 1; i <= limite; i++){
		//			
		//			if (i % 6 == 0) {
		//				cout << i << endl;
		//			}
		//			
		//		}
	} else {
		cout << "Numero invalido" << endl;
	}
	
	return resultado;
}
	




	
int main (int argc, char *argv[]) {
	
	int n = 200;
	cout << imprimirMulti6V2(n);

	
	return 0;
}

