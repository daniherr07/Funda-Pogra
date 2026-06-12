#include<iostream>
using namespace std;

void imprimirVector(int vector[], int tam){
	for (int i = 0; i < tam; i++){
		cout << vector[i] << " ";
	}
}

int main (int argc, char *argv[]) {
	
	int matriz[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int vector[3] = matriz[0];
	
	imprimirVector(vector, 3);
	
	
	return 0;
}

