#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
ingresa un cero, luego informar el m�ximo.

Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listar� 
M�ximo -5.

Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
ingresa un cero, luego informar el m�ximo y la posici�n del m�ximo en la lista.
En caso de �empates� considerar la primera aparici�n.

*/

int main() {
	
	int num, maximoNumero, posicion, cv = 0;
	
	cout << "Ingrese #: ";
	cin >> num;
	
	maximoNumero = num;
	posicion = 1;
	
	while(num != 0){
		
		cv++;
		
		if (num >maximoNumero){
			maximoNumero = num;
			posicion = cv;
		}
		
		
		cout << "Ingrese #: ";
		cin >> num;
	}
	
	cout << "El numero maximo es: " << maximoNumero << " en la posicion: " << posicion;
	
	return 0;
}
