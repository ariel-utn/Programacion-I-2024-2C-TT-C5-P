#include <iostream>

using namespace std;

/**

EL LABORATORIO V&V HACE FRASCOS DE PILDORAS PARA APRENDER A PROGRAMAR.

CADA FRASCO CONTIENE 75 PILDORAS Y CADA PILDORA CONTIENE

45 MG DE BETAMOL,
2 GRS DE MICILINA Y
7 MG DE ÁCIDO SINITICO.

NOS SOLICITAN UN PROGRAMA DONDE SE INGRESE LA CANTIDAD DE FRASCOS DE UN
PEDIDO Y MUESTRE LA CANTIDAD DE MILIGRAMOS DE BETAMOL, MICILINA Y DE ÁCIDO SINITICO QUE SON NECESARIOS PARA ELABORARLOS.

*/

int main (){

    /// DECLARACION VARIABLES
    const int PILDORAS = 75;
    const int BETAMOL = 45 * PILDORAS;
    const int MICILINA = 2000 * PILDORAS;
    const int SINITICO = 7 * PILDORAS;
    int frascos, totalBetamol, totalMicilina, totalSinitico;

    /// INGRESO DE DATOS
    cout << "Ingrese cantidad frascos: ";
    cin >> frascos;

    /// PROCESOS/CALCULOS
    totalBetamol = BETAMOL * frascos;
    totalMicilina = MICILINA * frascos;
    totalSinitico = SINITICO * frascos;

    /// SALIDA DE INFORMACION
    cout << endl;
    cout << "Cantidades necesarias para producir ";
    cout << frascos << " frascos: " << endl;
    cout << "Betamol " << totalBetamol << "mg" << endl;
    cout << "Micilina " << totalMicilina << "mg" << endl;
    cout << "Acido Sinitico " << totalSinitico << "mg" << endl;

	return 0;

}
