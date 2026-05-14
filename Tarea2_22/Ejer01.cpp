#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	int tamano = 19;
	
	int arreglo[tamano] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	
	for (int i = tamano - 1; i >= 0; i--){
		cout << arreglo[i] << endl;
	}
	
	return 0;
}

