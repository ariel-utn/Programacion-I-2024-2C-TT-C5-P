/**

Ciclo while vs. do while:

while: Primero verifica la condición y luego ejecuta el bloque de código.
Si la condición es falsa desde el inicio, el bloque de código no se
ejecutará ni una vez

do while: Ejecuta el bloque de código al menos una vez antes de verificar
la condición. Ideal cuando quieres asegurar que el bloque se ejecute al
menos una vez, sin importar la condición inicial.

do {
// Código a ejecutar
// Actualización de la variable
} while (condición);

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
