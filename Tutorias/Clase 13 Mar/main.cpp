#include<iostream>
using namespace std;


//
/*
	--- ¿Que es una función? ---
	Una receta en donde se puede volver a utilizar. 

	-- Analogías --
	Ingredientes: Parámetros
	Realiza un proceso interno
	Devuelve un resultado (valor de retorno)

	--- ¿Porque utilizarlas? ---
	- Reutlización: Escribí el codigo una vez, usandolo varias veces
	- Modularidad: Divide el problema en partes manejables
	- Legibilidad: El codigo es mas facil de leer y entender
	- Fácil depuración: Si algo falla, sabes exactamente donde buscar

	--- Estructura ---
	tipo_retorno nombre (parametros){}

	--- Comando: return ---
	"Aquí termino la receta, aquí esta el resultado". Retorna un valor
	y finaliza la función.

	--- Invocación de una función ---
	Teniendo una función cuadrado:

		int cuadrado(int n){
			return n*n
		}
		
		int main(){
			int resultado =	cuadrado(5)
							Aqui se invoca la función
			cout << resultado; => Sería 25
		}

	--- ¿Qué es un procedimiento? ---
	Tiene la misma estructura y función de una función, pero su utilidad recae
	en que no devuelve nada.

	--- Estructura de un procedimiento ---
	void nombre_procedimiento(parametros){}

	--- Paso de parametro por valor ---
	Crea una copia con el valor del parametro, pero no modifica la variable original.
	void sumar(int a)

	--- Paso de parametro por referencia ---
	Utiliza la variable original, sin crear copias
	void sumar(int &a)
*/

//Ejemplo de una funcion suma()

int sumar(int a, int b){
	return a + b;
}
	
void validarEdad(int edad, string &mensaje){
	if (edad >= 18) {mensaje = "Es mayor de edad";}
	if (edad < 18) {mensaje = "Es menor de edad";}
	if (edad < 0) {mensaje = "Edad invalida";}
}
	
int main (int argc, char *argv[]) {

	string mensaje;
	int edad;
	
	cout << "Por favor digite su edad" << endl;
	cin >> edad;
	
	validarEdad(edad, mensaje);
	cout << mensaje;
	return 0;
}




