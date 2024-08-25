#include <iostream>
using namespace std;

/**
Hacer un programa que permita ingresar cinco numeros y luego calcular y mostrar el promedio de los numeros positivos.

*/

/**
	ACUMULADOR:
	Es una variable que la utilizamos para acumular (sumar).
	- Hay que darle un valor inicial.
	- Acumula en cantidad VARIABLE.
	- Lo usamos cuando ocurre un fenomeno/condicion.

*/

int main() {
	
	/// ACUMULADOR Y CONTADOR
	int contadorPositivos;
	float acumuladorPositivos;
	contadorPositivos = acumuladorPositivos = 0;
	
	/// DECLARO VARIABLES
	float num;
	float promedio;
	
	/// INGRESO DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	/// CALCULOS/PROCESOS
	if(num > 0){
		contadorPositivos++;
		acumuladorPositivos += num;
		/// acumuladorPositivos = acumuladorPositivos + num;
	}

	/// INGRESO DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	/// CALCULOS/PROCESOS
	if(num > 0){
		contadorPositivos++;
		acumuladorPositivos += num;
		/// acumuladorPositivos = acumuladorPositivos + num;
	}
	
	/// INGRESO DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	/// CALCULOS/PROCESOS
	if(num > 0){
		contadorPositivos++;
		acumuladorPositivos += num;
		/// acumuladorPositivos = acumuladorPositivos + num;
	}
	
	/// INGRESO DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	/// CALCULOS/PROCESOS
	if(num > 0){
		contadorPositivos++;
		acumuladorPositivos += num;
		/// acumuladorPositivos = acumuladorPositivos + num;
	}
	
	/// INGRESO DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	/// CALCULOS/PROCESOS
	if(num > 0){
		contadorPositivos++;
		acumuladorPositivos += num;
		/// acumuladorPositivos = acumuladorPositivos + num;
	}
	if(contadorPositivos > 0){
	promedio = acumuladorPositivos / contadorPositivos;
		cout << "Promedio de positivos: " << promedio;
	}
	else{
		cout << "No hubo numeros positivos" << endl;
	}
	
	return 0;
}

