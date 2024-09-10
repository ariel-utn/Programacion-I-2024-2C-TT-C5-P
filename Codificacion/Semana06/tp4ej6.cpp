#include <iostream>
using namespace std;

int main() {
	
	int contPos = 0;
	int contNeg = 0;
	int num;
	
	cout << "Ingrese #: ";
	cin >> num;
	
	while( num != 0){
		if(num > 0){
			contPos++;
		}
		else{
			contNeg++;
		}
		///
		cout << "Ingrese #: ";
		cin >> num;
	}
	
	cout << "Cantidad positivos: " << contPos << endl;
	cout << "Cantidad negativos: " << contNeg << endl;
	return 0;
}

