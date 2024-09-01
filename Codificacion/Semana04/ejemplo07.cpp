#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	/// DECLARACION DE VARIABLES
	bool band = false;
	int num, maxPar;
	
	for(int i = 1; i <= 5; i++){
		cout << "Ingrese #: ";
		cin >> num;
		
		if(num%2 == 0){
			
			if(band==false){
				band = true;
				maxPar = num;
			}
			else{
				if(num>maxPar){
					maxPar = num;
				}
			}
		}
	}
	
	if(band != false){
		cout << "Maximo PAR: " << maxPar << endl;
	}
	else
		cout << "No hubo numeros pares" << endl;
	
	return 0;
}








