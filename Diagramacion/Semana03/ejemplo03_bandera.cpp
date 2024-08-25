#include <iostream>
using namespace std;

/**
	Hacer un programa que permita ingresar cinco numeros y 	luego determinar y mostrar si hubo al menos un numero negativo.

*/

/**
	BANDERA
	Es una variable que usamos para determinar si ocurrio o no un fenomeno (condicion).

	Las banderas trabajan con estados. Nosotros como programador tenemos que elegir que significa cada uno de esos estados.

	EJ.
	banderaNegativos = false;  NO HUBO numeros negativos
	banderaNegativos = true;   HUBO AL MENOS un negativo


*/

int main(int argc, char *argv[]) {
	
	/// BANDERA
	bool banderaNegativos = false;  /// NO HUBO negativos;
	
	/// DECLARACION DE VARIABLES
	float num;
	
	/// INGRESO DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	if(num < 0){
		banderaNegativos = true;
	}

	/// INGRESO DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	if(num < 0){
		banderaNegativos = true;
	}
	
	/// INGRESO DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	if(num < 0){
		banderaNegativos = true;
	}
	
	/// INGRESO DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	if(num < 0){
		banderaNegativos = true;
	}
	
	/// INGRESO DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	if(num < 0){
		banderaNegativos = true;
	}
	
	if(banderaNegativos==true){
		cout << "HUBO AL MENOS un numero negativo" << endl;
	}
	else{
		cout << "NO HUBO numeros negativos" << endl;
		}
	}
	
	
	return 0;
}

