#include <iostream>

using namespace std;

int main (){

    /**
    DIFERENCIA ENTRE LA DIVISION ENTERA Y LA DIVISION REAL EN C++

    TIPO DE DIVISION	OPERANDOS	        RESULTADO	COMPORTAMIENTO
    ENTERA	            AMBOS ENTEROS	    ENTERO	    DESCARTA LA PARTE DECIMAL
    REAL	            AL MENOS UNO REAL	REAL	    CALCULA CON TODA LA PRECISION POSIBLE
    */

    /// INT/INT = INT
    cout << "7/5 = " << 7/5 << endl;

    /// INT/FLOAT = FLOAT
    cout << "7/5.0 = " << 7/5.0 << endl;

    /// FLOAT/INT = FLOAT
    cout << "7.0/5 = " << 7.0/5 << endl;

    /// FLOAT/FLOAT = FLOAT
    cout << "7.0/5.0 = " << 7.0/5.0 << endl;

	return 0;
}
