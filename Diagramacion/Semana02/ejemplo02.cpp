#include <iostream>

using namespace std;

int main (){

    int num;
    /**
    /// OPERADORES LOGICOS

    AND --> &&

    E1   OP.L   E2  R
    V    &&     V   V
    V    &&     F   F
    F    &&     V   F
    F    &&     F   F

    1 * 1 = 1
    1 * 0 = 0
    0 * 1 = 0
    0 * 0 = 0

    OR --> ||
    E1   OP.L   E2  R
    V    ||     V   V
    V    ||     F   V
    F    ||     V   V
    F    ||     F   F

    1 + 1 = 1
    1 + 0 = 1
    0 + 1 = 1
    0 + 0 = 0

    NOT --> ! (cambia el resultado de la expresion logica)
    E1   OP.L     R
    V     !       F
    F     !       V

    /// IMPORTANTE USAR PARENTESIS EN LA SENTENCIA IF
    F && V || V    = V
    F && ( V || V) = F


    */

    /// IMPORTANTE USAR PARENTESIS EN LA SENTENCIA IF

    if ( (1==0) && (1>0) || (1>0) ){
        cout << "Entra al IF 1";
    }
    if (false && (true || true) ) {
        cout << "Entra al IF 2";
    }




	return 0;

}
