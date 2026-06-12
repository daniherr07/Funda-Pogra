#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	//ejercicio 23
	const int Max = 100; //esto es para que tenga un limite de campo
	int v1[Max],v2[Max],v3[Max],v4[Max],v5[Max],v6[Max],v7[Max],v8[Max];
	
	
	int array1[Max] = {1,2,3};
	int array2[Max] = {4,5,6,7};
	int tamArray1 = 3;
	int tamArray2 = 4;
	int sumaVec = 0;
	int tamArray3 = tamArray1+tamArray2;
	
	//v3 primero v1 luego v2
	for(int i = 0; i < tamArray1; i++){
		v3[i] = array1[i]; //copia el array1 al array3
		cout << "El v3 es: " <<v3[i]<< endl;
	}
	
	cout<< endl<<endl<<endl;
	
	//v4 intercalados
	for(int i = 0; i < tamArray1; i++){
		v4[i*2] = array1[i]; //este es para intercalar los del array1, el 2 hace posiciones pares
		v4[i*2+1] = array2[i]; //este es para intercalar los del array2, al sumarle 1 lo hace impar
		
		cout<<"El v4 es: ";
		for(int i=0; i<6; i++){ //esto es para que imprima todos los digitos intercalados y no pare sin ponerlos todos
			cout<<v4[i]<< " " << endl;
		}
	}
	
	cout<< endl<<endl<<endl;
	
	
	//v5 pares de v1 y impares de v2
	int k=0;
	for(int i = 0; i < tamArray1; i++){ //este for saca solo pares guardandolos en j
		if(array1[i]%2==0){ 
			v5[k]=array1[i];//si es par algun num de array1 se guarda en k
			k++;
		}
	}
	for(int i = 0; i < tamArray2; i++){ //este for saca solo impares guardandolos en j
		if(array2[i]%2!=0){ 
			v5[k]=array2[i];//si es impar algun num de array2 se guarda en k
			k++;
		}
	}
	cout<< "v5 pares e impares: ";
	for(int i=0; i<k ; i++){
		cout<< v5[i]<< " ";
	}
	
	cout<< endl<<endl<<endl;
	
	
	//v6 todos los elementos num primos que esten en v1 o v2
	int m=0;//para guardar los num de v6
	for(int i = 0; i < tamArray1; i++){
		int num = array1[i];
		int divisores = 0;//aqui todavia el array1 no tiene divisores hasta que pasa por el filtro for de abajo
		
		for(int k = 1; k<= num; k++){//revisa si los numeros se dividen entre 1 hasta el mismo
			if(num%k==0){//si algun num es de residuo 0 se suma a divisores 
				divisores++;//si el residuo es 0 hay un divisor
			}
		}
		if(divisores==2){
			v6[m]=num;//se guarda en m
			m++;
		}
	}
	cout<< "v6 numeros primos: ";
	for(int i=0; i<m; i++){
		cout<< v6[i]<< " ";
	}
	
	
	cout<< endl<<endl<<endl;
	
	
	//v7 tiene todos los num del 0 a n, n es el mayor num de v1 y v2
	int todos = 0; //aqui se guardan todos los nums
	for(int i = 0; i < tamArray1; i++){
		v7[todos] = array1[i]; 
		todos++;
	}
	for(int i = 0; i < tamArray2; i++){
		v7[todos] = array2[i]; //aqui empieza desde el ultimo num metiendo los que faltan sin reemplazarlos
		todos++;
	}
	cout<< "v7 todos los numeros del 0 al n: ";
	for(int i=0; i<todos; i++){
		cout<< v7[i]<< " ";
	}
	
	
	cout<< endl<<endl<<endl;
	
	
	//v8 tiene todos los elementos de v1 y v2 por orden sin repetirse ni intercalarse
	int all=0;
	for(int i = 0; i < tamArray1; i++){
		v8[all]=array1[i];
		all++; //este for mete practicamente todos a la bolsa all, ya que son los primeros
	}
	for(int i = 0; i < tamArray2; i++){
		bool estaDentro=false;//empieza con nums como si no estuvieran ya dentro
		for(int n = 0; n < all; n++){
			if(array2[i] == all){//si el num de array2 es igual a uno de los guardados en all
				estaDentro=true;//entonces si esta, ya no se mete
				break;//se para de buscar si esta repetido o no
			}
		}
		if(estaDentro==false){
			v8[all]=array2[i];
			all++;//este solo si no esta se mete dentro si no, no
		}
	}
	cout<< "v8 todos los numeros en orden y sin repetirse: ";
	for(int i=0; i<all; i++){
		cout<< v7[i]<< " ";
	}
	
	
	return 0;
}

