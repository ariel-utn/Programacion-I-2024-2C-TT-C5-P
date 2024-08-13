#include <iostream>

using namespace std;

/**
HACER UN PROGRAMA PARA INGRESAR POR TECLADO UN NUMERO Y LUEGO EMITIR POR PANTALLA UN CARTEL ACLARATORIO INDICANDO SI EL MISMO ES POSITIVO, NEGATIVO O CERO.

IMPORTANTE: VERIFIQUE QUE EL PROGRAMA EMITA UN SOLO CARTEL.

*/

int main ()
{
    int num;
    cout << "Ingrese #: ";
    cin >> num;

    /// ALTERNATIVA 1

    /// IF SECUENCIALES

    /**
    if(num > 0){
        cout << "El numero " << num << " es positivo";
    }
    if(num < 0){
        cout << "El numero " << num << " es negativo";
    }
    if (num == 0){
        cout << "El numero " << num << " es cero";
    }
    */


    /// ALTERNATIVA 2

    /// IF ANIDADOS

    /**
    if(num > 0){
        cout << "El numero " << num << " es positivo";
    }
    else
    {
        if(num < 0){
            cout << "El numero " << num << " es negativo";
        }
        else{
            cout << "El numero " << num << " es cero";
        }
    }
    */

    /// ALTERNATIVA 3

    /// IF ANIDADOS CON ELSE IF

    /**
    if(num > 0){
        cout << "El numero " << num << " es positivo";
    }
    else if(num < 0){
        cout << "El numero " << num << " es negativo";
    }
    else{
        cout << "El numero " << num << " es cero";
    }
    */

    /// ALTERNATIVA 4
    /// IF ANIDADOS CON ELSE IF CON OMISION DE '{}' LLAVES --> CUIDADO!!!

    if(num > 0)
        cout << "El numero " << num << " es positivo";
    else if(num < 0)
        cout << "El numero " << num << " es negativo";
    else
        cout << "El numero " << num << " es cero";

    return 0;
}
