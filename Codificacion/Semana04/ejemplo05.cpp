#include <iostream>
using namespace std;

int main(){
	
	
	
	int max = 0;
	int num, pos;
	
	for (int i = 0; i < 5 ; i++){
	cout << "Ingrese #: ";
	cin >> num;
	
	if(max==0){ /// BANDERA Y VALOR DEL MAXIMO ---> ERROR
		max = num;
		pos = i + 1;
	
	}
	else{
		if(num > max){
			max = num;
			pos = i +1;
		}
	}
	}
	
	
	cout << "Valor MAXIMO: " << max << endl;
	cout << "En la posicion: " << pos;
	
	return 0;
}

