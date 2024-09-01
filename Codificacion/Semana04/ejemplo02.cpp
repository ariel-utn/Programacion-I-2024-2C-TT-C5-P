#include <iostream>

using namespace std;

/**
Hacer un programa para ingresar una lista de 10 números, luego informar el
máximo y la posición del máximo en la lista. En caso de “empates” considerar la
primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listará Máximo 35 Posición 7.
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listará Máximo 55 Posición 7.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listará Máximo -6 Posición 8.
El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
máximo es un positivo.
*/

int main(){
	
	/// DECLARACION DE VARIABLES
	int max, num;
	bool band = false;
	
	for(int i = 1; i <= 5; i++){
		cout << "Ingrese #: " ;
		cin >> num;
		
		if(band==false){
			max = num;
			band = true;
		}
		else{
			if(num > max){
				max = num;
			}
		}
		
	}
	
	cout << "Valor: " << max;
	
	
	return 0;
}
	
