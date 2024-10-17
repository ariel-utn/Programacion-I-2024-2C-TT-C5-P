#include <iostream>

using namespace std;

/**

Una empresa metal�rgica dispone de un conjunto de registros que representan las producciones de cada una de sus 5 maquinas

Por cada d�a y maquina se carga la siguiente informaci�n:

  - Numero de Maquina (1 - 5)
  - D�a (31)
  - Cantidad de piezas producidas

El fin de la carga de datos se indica con numero de maquina igual a cero.

Informar:
	A- Por cada d�a, la cantidad de piezas producidas.
	B- Los d�as donde se realizaron �nicamente producciones de la maquina 3.
	*/


int main()
{

    int nroMaquina, dia, piezas;

    /// PTO A
   /// int vecDia[31]{};  /// PONER EN CERO EL VECTOR

    /// PTO B
    bool vecMaq3[31]{};     /// PONER EN CERO EL VECTOR
    bool vecOtrasMaq[31]{}; /// PONER EN CERO EL VECTOR


    cout << "Ingrese maquina#:" ;
    cin >> nroMaquina;

    while(nroMaquina != 0)
    {
        cout << "Ingrese dia: ";
        cin >> dia;

        cout << "Ingrese cant. piezas:";
        cin >> piezas;

        /// PROCESO REGISTROS
        /// PTO A
       vecDia[dia - 1] += piezas;

        /// PTO B
        if(nroMaquina==3){
            vecMaq3[dia-1]=1;
        }
        else{
            vecOtrasMaq[dia-1]=1;
        }

        cout << "Ingrese maquina#:" ;
        cin >> nroMaquina;
    }

    cout << "PTO A) Cantidad piezas por dia" << endl;
    for (int i = 0; i < 31; i++){
        cout << "El dia " << i+1 << ": " << vecDia[i] << endl;
    }

    cout << "PTO B) Dias prod unicamente maquina 3" << endl;
    for (int i = 0; i < 31; i++){
        if(vecMaq3[i] == 1 && vecOtrasMaq[i] == 0){
            cout << "Dia: " << i + 1;
        }
    }
    return 0;
}
