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
	
	int num, maximoNumero, ubicacionMaximo;
	int contNumeros = 0;
	
	cout << "Ingrese #: ";
	cin >> num;
	
	while(num != 0){
		contNumeros++;
		
		if(contNumeros==1){
			maximoNumero = num;
			ubicacionMaximo = contNumeros;
		}
		else if (num >maximoNumero){
			maximoNumero = num;
			ubicacionMaximo = contNumeros;
		}
		
		
		cout << "Ingrese #: ";
		cin >> num;
	}
	
	cout << "El numero maximo es: " << maximoNumero << " en la ubicacion: " << ubicacionMaximo << endl;
	
	return 0;
}

