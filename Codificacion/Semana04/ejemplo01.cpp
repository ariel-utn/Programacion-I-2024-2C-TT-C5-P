#include <iostream>

using namespace std;

/**
Hacer un programa para ingresar una lista de 10 n�meros, luego informar el
m�ximo y la posici�n del m�ximo en la lista. En caso de �empates� considerar la
primera aparici�n.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listar� M�ximo 35 Posici�n 7.
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listar� M�ximo 55 Posici�n 7.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listar� M�ximo -6 Posici�n 8.
El tercer ejemplo demuestra que NO SIEMPRE en una lista de n�meros el
m�ximo es un positivo.
*/

int main(){
	
	/// DECLARACION DE VARIABLES
	int max, num, pos;	
	
	for(int i = 1; i <= 5; i++){
		cout << "Ingrese #: " ;
		cin >> num;
		
		/// PREGUNTAR POR EL VALOR DE I PARA DETERMINAR 
		/// SI ES EL PRIMER NUMERO INGRESADO
		
		if(i==1){
			max = num;
			pos = i;
		}
		else{
			if(num >= max){
				max = num;
				pos = i;
			}
		}
		
	}
	
	cout << "Valor MAXIMO: " << max << endl;
	cout << "En la posicion: " << pos;
	
	
	return 0;
}