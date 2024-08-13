#include <iostream>

using namespace std;

    /**
    OPERADORES RELACIONALES
    >   MAYOR QUE
    <   MENOR QUE
    >=  MAYOR O IGUAL QUE
    <=  MENOR O IGUAL QUE
    ==  IGUAL
    !=  DISTINTO
    */


int main (){

    int num;

    cout << "Ingrese #: ";
    cin >> num;


    /// DECISION SIMPLE
    /// IF
    if(num > 0){

        /// SALIDA POR EL VERDADERO - - > OBLIGATORIA
        cout << "el numero es mayor a 0" << endl;
    }


    /// DECISION DOBLE
    /// IF-ELSE

    if(num>0){
        /// SALIDA POR EL VERDADERO - - > OBLIGATORIA
        cout << "El numero es mayor a 0" << endl;
    }
    else{
        /// SALIDA POR EL FALSO - - > OPTATIVA
        cout << "El numero NO es mayor a 0" << endl;
    }

	return 0;

}
