#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	//ejercicio 13 
	int vector1[] = {2,3};
	int vector2[] = {1,4};
	int tamVec = 2; //tam de los vectores
	int suma = 0;//esto es para sumar los vectores y que si son iguales o no son perpen o no
	
	for(int i = 0; i < tamVec ; i++){	//i menor al tam de los vectores
		suma=suma + (vector1[i]*vector2[2]); //suma los vectores
		
	}
	
	if(suma == 0){
		cout << "es perpendicular" << endl;
	}else{
		cout << "no es perpendicular" << endl;
	}
	
	cout<< endl<<endl<<endl;s
	
	
	return 0;
}

