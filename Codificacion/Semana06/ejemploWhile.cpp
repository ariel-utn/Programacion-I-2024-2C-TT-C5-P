/**
Uso del ciclo while:
Se utiliza el ciclo while cuando no se conoce de antemano la cantidad exacta
de repeticiones.

Condici�n de terminaci�n del ciclo:
Es importante que el enunciado del problema defina claramente cu�ndo debe
terminar el ciclo. Esto es fundamental para evitar ciclos infinitos.

Variable centinela:
Usualmente, en los ciclos while, usamos una variable centinela para
controlar la terminaci�n del ciclo, pero no es obligatorio usar el valor
cero como centinela. 

Sintaxis y evaluaci�n:
La sintaxis general del ciclo while es:

while (condici�n l�gica) {
// Instrucciones a repetir
}

La condici�n l�gica se eval�a en cada iteraci�n. Si la condici�n es
verdadera, se ejecuta el bloque de instrucciones. Si es falsa, el ciclo
termina.


*/

#include <iostream>

using namespace std;

int main() {
	int num;
	int cuentaPares = 0;
	
	// Solicita el primer numero
	cout << "Ingrese un numero: ";
	cin >> num;
	
	// Mientras el numero ingresado no sea cero
	while (num != 0) {
		// Verifica si el numero es par
		if (num % 2 == 0) {
			cuentaPares++;
		}
		
		// Solicita el siguiente n�mero
		cout << "Ingrese un numero: ";
		cin >> num;
	}
	
	// Mostrar el total de numeros pares ingresados
	cout << "La cantidad total de numeros pares ingresados es: " << cuentaPares << endl;
	
	return 0;
}
