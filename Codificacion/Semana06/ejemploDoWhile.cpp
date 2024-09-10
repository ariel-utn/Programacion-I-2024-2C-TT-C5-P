/**

Ciclo while vs. do while:

while: Primero verifica la condici�n y luego ejecuta el bloque de c�digo.
Si la condici�n es falsa desde el inicio, el bloque de c�digo no se
ejecutar� ni una vez

do while: Ejecuta el bloque de c�digo al menos una vez antes de verificar
la condici�n. Ideal cuando quieres asegurar que el bloque se ejecute al
menos una vez, sin importar la condici�n inicial.

do {
// C�digo a ejecutar
// Actualizaci�n de la variable
} while (condici�n);

*/

#include <iostream>

using namespace std;

int main() {
	int edad;
	
	do {
		cout << "Ingrese edad: ";
		cin >> edad;
	} while (edad <= 0);
	
	cout << "Edad ingresada: " << edad << endl;
	
	return 0;
}
