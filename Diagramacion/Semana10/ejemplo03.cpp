#include <iostream>
using namespace std;

void porValor(int n);

void porReferencia(int &n);

int main() {
	
	int num;
	cin >> num;
	
	cout << "Num antes de la funcion: " << num << endl;
	porReferencia(num);
	cout << "Num despues de la funcion: " << num << endl;
	
	return 0;
}

void porValor(int n){
	///cout << n;
	n= -11;
}

void porReferencia(int &n){
	n= -11;
}
