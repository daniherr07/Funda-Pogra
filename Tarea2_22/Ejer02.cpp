#include<iostream>
using namespace std;

bool esPerpen(int vectorA[], int vectorB[], int tamano){
	int sumatoria = 0;
	
	for (int i = 0; i < tamano; i++){
		sumatoria += vectorA[i] * vectorB[i];
	}
	
	return sumatoria == 0;
}

int main (int argc, char *argv[]) {
	
	int tamano = 2;
	int vectorA[tamano] = {1, 2};
	int vectorB[tamano] = {30, -1};
	
	if(esPerpen(vectorA, vectorB, tamano)){
		cout << "Es perpendicular";
	} else {
		cout << "No es perpendicular";
	}
	
	
	

	return 0;
}

