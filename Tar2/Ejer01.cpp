#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	//ejercicio 2	
	
	int n = 5;					  //tam es 5 digitos
	int vector[10] = {1,2,3,4,5}; //se declara el tam de mi vector
	
	//esto hace que vaya en reversa
	
	for(int i = n-1; i>=0; i--){
		cout<< vector[i] << endl;
	}
	
	cout << endl << endl;
	
	
	return 0;
}

