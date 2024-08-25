#include <iostream>
using namespace std;

/**
11 Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
números son positivos, cuantos son negativos y cuantos son iguales a 0.
*/

/**
	CONTADORES:
	Son variables que las usamos para contar.
	- Hay que darle valor inicial, generalmente cero.
	- Crece/decrece en valor CONSTANTE, generalmente 1,
	- En general se usan cuando ocurre un fenomeno/condicion.

*/


int main() {
	
	/// CONTADORES
	int contadorPositivos, contadorNegativos, contadorCero;
	contadorPositivos = contadorNegativos = contadorCero = 0;
	
	/// DECLARACION DE VARIABLES
	///int num1, num2, num3, num4, num5;
	int num;
	
	/// INGRESO DE DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	/// CALCULOS/PROCESOS
	if(num == 0){
		contadorCero++;		/// SIEMPRE CRECE DE UNO EN UNO
		/// contadorCero = contadorCero + 1;
		/// contadorCero += 1;
	}
	else{
		if(num < 0){
			contadorNegativos++;			
		}
		else{
			contadorPositivos++;
		}
	}
	/// INGRESO DE DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	/// CALCULOS/PROCESOS
	if(num == 0){
		contadorCero++;		/// SIEMPRE CRECE DE UNO EN UNO
		/// contadorCero = contadorCero + 1;
		/// contadorCero += 1;
	}
	else{
		if(num < 0){
			contadorNegativos++;			
		}
		else{
			contadorPositivos++;
		}
	}
	/// INGRESO DE DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	/// CALCULOS/PROCESOS
	if(num == 0){
		contadorCero++;		/// SIEMPRE CRECE DE UNO EN UNO
		/// contadorCero = contadorCero + 1;
		/// contadorCero += 1;
	}
	else{
		if(num < 0){
			contadorNegativos++;			
		}
		else{
			contadorPositivos++;
		}
	}
	/// INGRESO DE DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	/// CALCULOS/PROCESOS
	if(num == 0){
		contadorCero++;		/// SIEMPRE CRECE DE UNO EN UNO
		/// contadorCero = contadorCero + 1;
		/// contadorCero += 1;
	}
	else{
		if(num < 0){
			contadorNegativos++;			
		}
		else{
			contadorPositivos++;
		}
	}
	/// INGRESO DE DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	/// CALCULOS/PROCESOS
	if(num == 0){
		contadorCero++;		/// SIEMPRE CRECE DE UNO EN UNO
		/// contadorCero = contadorCero + 1;
		/// contadorCero += 1;
	}
	else{
		if(num < 0){
			contadorNegativos++;			
		}
		else{
			contadorPositivos++;
		}
	}
	
	/// SALIDA
	
	cout << "Cantidad positivos: " << contadorPositivos << endl;
	cout << "Cantidad negativos: " << contadorNegativos << endl;
	cout << "Cantidad ceros: " << contadorCero << endl;
	
	
	return 0;
}

