#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	/// Declaración de variable y salida inicial:
	
	int n = 5;
	
	cout << "Salida: " << n << endl;
	
	cout << endl;

	/// Impresión del valor de n con incremento postfijo:
	
	cout << "Salida: " << n++ << endl;
	
	cout << endl;

	/// Impresión del valor de n con incremento prefijo:
	
	cout << "Salida: " << ++n << endl;
	
	return 0;
}

