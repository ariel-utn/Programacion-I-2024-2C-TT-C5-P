#include <iostream>
#include <iomanip>

using namespace std;

/**

UN COMERCIO VENDE TRES MARCAS DE ALFAJORES DISTINTAS A, B Y C.
HACER UN PROGRAMA PARA INGRESAR POR TECLADO LA CANTIDAD DE ALFAJORES VENDIDOS DE CADA
UNA DE LAS TRES MARCAS Y LUEGO SE INFORME EL PORCENTAJE DE VENTAS PARA CADA UNA DE ELLAS.

EJEMPLO. SI SE INGRESA 100, 25 Y 75 COMO CANTIDADES VENDIDAS ENTONCES EL PROGRAMA CALCULARá E INFORMARá A: 50%, B: 12,50% Y C: 37,50%.

*/

int main (){

    /// DECLARACION DE VARIABLES
    int marcaA, marcaB, marcaC, total;
    float porcMarcaA, porcMarcaB, porcMarcaC;

    /// ENTRADA DE DATOS
    cout << "Ingrese marca A: ";
    cin >> marcaA;

    cout << "Ingrese marca B: ";
    cin >> marcaB;

    cout << "Ingrese marca C: ";
    cin >> marcaC;

    /// PROCESOS
    total = marcaA + marcaB + marcaC;

    /// ALTERNATIVA 1
//    porcMarcaA = (float)(marcaA * 100) / total;
//    porcMarcaB = (float)(marcaB * 100) / total;
//    porcMarcaC = (float)(marcaC * 100) / total;

    /// ALTERNATIVA 2
    porcMarcaA = ((float)marcaA / total) * 100;
    porcMarcaB = ((float)marcaB / total) * 100;
    porcMarcaC = ((float)marcaC / total) * 100;

    /// SALIDA
    cout << "Porc. marca A: " << fixed << setprecision(3) << porcMarcaA << "%" << endl;
    cout << "Porc. marca B: " << fixed << setprecision(3) << porcMarcaB << "%" << endl;
    cout << "Porc. marca C: " << fixed << setprecision(3) << porcMarcaC << "%" << endl;

	return 0;

}
