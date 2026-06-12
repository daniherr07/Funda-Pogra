#include <iostream>
#include <string>
using namespace std;

const int ARTICULOS = 82;

/* 
1. El supermercado solo puede albergar 82 productos ya que los tamaños de los arrays tienen un valor de 82, estos definidos
por la variable "ARTICULOS"

2. El archivo suministrado cuenta con 50 productos.Además, coincide con el valor de la variable "numero" que ayuda a iterar
sobre los arreglos para realizar la impresión de la información de los productos.
.*/

double Pregunta3(double precios[]){
	
	double sumatoria = 0;
	double articulos = 0;
	
	for (int i = 0; i < ARTICULOS; i++) {
		if (precios[i] == 0) break; //Hasta que detecte que ya no hay un producto
		sumatoria += precios[i];
		articulos++;
		
	}
	
	return sumatoria/articulos;
}
	
void Pregunta4(string productos[], double precios[]) {
	
	double articulos = 0;
	
	for (int i = 0; i < ARTICULOS; i++) {
		if (precios[i] == 0) break; //Hasta que detecte que ya no hay un producto
		articulos++;
	}
	
	for (int i = articulos - 1; i >= 1; i--) {
		int posicion = i;
		
		for (int j = i - 1; j >= 0; j--) {
			if (precios[j] < precios[posicion]) {
				posicion = j;
			}
		}
		
		string aux1= productos[i];
		productos[i] = productos[posicion];
		productos[posicion] = aux1;
		
		int aux2 = precios[i];
		precios[i] = precios[posicion];
		precios[posicion] = aux2;
	}
}

void Pregunta5(string productos[], double precios[]){
	double articulos = 0;
	
	for (int i = 0; i < ARTICULOS; i++) {
		if (precios[i] == 0) break; //Hasta que detecte que ya no hay un producto
		articulos++;
	}
	
	int economico = 0, intermedio = 0, costosos = 0;
	
	Pregunta4(productos, precios); //Ordenamos los productos de mmayor a menor
	
	for (int i = 0; i < articulos; i++) {
		if (precios[i] < 1000) economico++; 
		if (1000 <= precios[i] && precios[i] < 5000) intermedio++;
		if (precios[i] >= 5000) costosos++;
	
	}
	
	cout << "Hay un total de " << economico << " productos economicos" << endl;
	cout << "Hay un total de " << intermedio << " productos intermedios" << endl;
	cout << "Hay un total de " << costosos << " productos costosos" << endl;
}

int main() {
	
	string productos[ARTICULOS] = {
			"Arroz", "Frijoles", "Azucar", "Sal", "Cafe",
			"Leche", "Huevos", "Pan", "Mantequilla", "Queso",
			"Yogurt", "Cereal", "Harina", "Aceite", "Pasta",
			"Salsa de tomate", "Atun", "Sardinas", "Pollo", "Carne molida",
			"Jamon", "Salchichas", "Manzanas", "Bananos", "Naranjas",
			"Papas", "Tomates", "Cebollas", "Zanahorias", "Lechuga",
			"Galletas", "Chocolate", "Refresco", "Agua embotellada", "Jugo de naranja",
			"Detergente", "Jabon de bano", "Pasta dental", "Papel higienico", "Champu",
			"Desinfectante", "Cloro", "Esponjas", "Servilletas", "Helado",
			"Mayonesa", "Mostaza", "Ketchup", "Tortillas", "Cereal integral"
	};
	
	double precios[ARTICULOS] = {
			1250.00, 1450.00, 950.00, 650.00, 3850.00,
			1100.00, 2300.00, 900.00, 1750.00, 4200.00,
			850.00, 3150.00, 1200.00, 2850.00, 990.00,
			1350.00, 1850.00, 1600.00, 5200.00, 4750.00,
			2450.00, 2100.00, 1800.00, 750.00, 1650.00,
			1400.00, 950.00, 875.00, 1250.00, 700.00,
			1150.00, 1350.00, 1950.00, 800.00, 1450.00,
			3950.00, 1100.00, 1750.00, 3250.00, 2850.00,
			2150.00, 1850.00, 950.00, 1350.00, 2750.00,
			1650.00, 950.00, 1100.00, 1250.00, 3450.00
	};
	
	int numero = 50;
	
	for (int i = 0; i < numero; i++) {
		cout<< (i + 1) << "  " << productos[i] << " - Precio: " << precios[i] << endl;
	}
	
	cout << endl << endl;
	
	cout << Pregunta3(precios);
	
	Pregunta4(productos, precios);
	
	cout << endl << endl;
	
	for (int i = 0; i < numero; i++) {
		cout<< (i + 1) << "  " << productos[i] << " - Precio: " << precios[i] << endl;
	}
	
	cout << endl << endl;
	
	Pregunta5(productos, precios);
	
	return 0;  
}


