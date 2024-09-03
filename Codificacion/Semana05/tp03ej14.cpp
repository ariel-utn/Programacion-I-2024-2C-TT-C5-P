#include <iostream>
using namespace std;

/**
Dada una lista de 7 números informar cual es el primer, el segundo, el anteúltimo
y el último número impar ingresado.

Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa:

	Primer impar: -5,
	Segundo impar: 7,
	Anteúltimo impar: 9 y
	Último impar: 5.

*/


int main() {
	
	/// DECLARACION
	int contImpar = 0;
	int num, primerImpar,segundoImpar,antUltImpar,ultImpar;
	
	for(int i = 1; i <= 7; i++){
		
		cout << "Ingrese #: ";
		cin >> num;
		
		if(num%2 != 0){
			contImpar++;
			
			if(contImpar==1){
				primerImpar = num;
			}
			else{
				if(contImpar==2){
					segundoImpar=num;
				}
				antUltImpar = ultImpar;
			}
			ultImpar = num;
			
		}
		
	}
	
	if(contImpar==0){
		cout << "NO HUBO IMPARES" << endl;
	}
	else{
		cout << "EL PRIMER IMPAR: " << primerImpar << endl;
		if(contImpar > 2){
			cout << "EL SEGUNDO IMPAR: " << segundoImpar << endl;
			cout << "EL ANTEULTIMO IMPAR: " << antUltImpar << endl;
		}
		cout << "EL ULTIMO IMPAR: " << ultImpar << endl;
	}

	
	return 0;
}

