#include <iostream>
using namespace std;

int main() {
	
	int edad;
	
	do{
		cout << "Ingrese edad: ";
		cin >> edad;
		
	} while(edad <= 0);
	
	return 0;
}

