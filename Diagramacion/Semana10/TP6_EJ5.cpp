#include <iostream>
using namespace std;

int Redondear(float n);

int main(int argc, char *argv[]) {
	
	cout << Redondear(7.48) << endl;
	
	return 0;
}

int Redondear(float n){
	int aux = (int)n;
	if((n - aux) >= 0.5){
		return aux+1;
	}
	return aux;
		
}
