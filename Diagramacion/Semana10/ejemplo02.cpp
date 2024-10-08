#include <iostream>
using namespace std;

/// DECLARACION
int calcularMaximo(int num1, int num2);

int main() {
	int n1, n2, max;
	cout << "Ingrese #1: ";
	cin >> n1;
	cout << "Ingrese #2: ";
	cin >> n2;
	
	max = calcularMaximo(n1,n2);
	
	cout << "El maximo es: " << max << endl;
	
	return 0;
}

/// IMPLEMENTACION
int calcularMaximo(int num1, int num2){
	if(num1 > num2){
		return num1;
	}
	return num2;
}
