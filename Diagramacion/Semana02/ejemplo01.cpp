#include <iostream>

using namespace std;

int main (){

    /// DECLARACION
    int num;

    /// ENTRADA DE DATOS
    cin >> num;

    /// DECISIONES
    if ( num > 0){
       cout << "POS";
    }
    else{
        if ( num == 0){
            cout << "CERO";
        }
        else{
            cout << "NEG";
        }
    }

	return 0;

}
