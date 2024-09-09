#include <iostream>
using namespace std;

/**
Dada una lista de numeros calcular y mostrar la cantidad de numeros de positivos. La lista finaliza cuando el usuario ingresa un cero.
*/

int main() {
	
	float num;
	int cont = 0;
	
	cout << "Ingrese #: ";
	cin >> num;
	
	while( num != 0){
		if(num > 0){
			cont++;
		}
		
		cout << "Ingrese #: ";
		cin >> num;
	}
	cout << "Total positivos: " << cont;
	
	
	return 0;
}

