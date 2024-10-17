#include <iostream>

using namespace std;

/**

Una empresa metalúrgica dispone de un conjunto de registros que representan las producciones de cada una de sus 5 maquinas

Por cada día y maquina se carga la siguiente información:

  - Numero de Maquina (1 - 5)
  - Día (31)
  - Cantidad de piezas producidas

El fin de la carga de datos se indica con numero de maquina igual a cero.

Informar:
	A- Por cada día, la cantidad de piezas producidas.
	B- Los días donde se realizaron únicamente producciones de la maquina 3.
	*/


int main()
{

    int nroMaquina, dia, piezas;

    /// PTO A
    int piezasDia1 = 0, piezasDia2 = 0, piezasDia3 = 0;

    /// PTO B
    bool dia1maq3,dia2maq3, dia3maq3, dia1Otras, dia2Otras, dia3Otras;

    dia1maq3=dia2maq3=dia3maq3=dia1Otras=dia2Otras=dia3Otras=0;

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
        if(dia == 1)
        {
            piezasDia1 += piezas;
        }
        if(dia == 2)
        {
            piezasDia2 += piezas;
        }
        if(dia == 3)
        {
            piezasDia3 += piezas;
        }
        /// PTO B

        if(dia==1)
        {
            if(nroMaquina == 3)
            {
                dia1maq3 = 1;
            }
            else
            {
                dia1Otras = 1;
            }
        }

        if(dia==2)
        {
            if(nroMaquina == 3)
            {
                dia2maq3 = 1;
            }
            else
            {
                dia2Otras = 1;
            }
        }

        if(dia==3)
        {
            if(nroMaquina == 3)
            {
                dia3maq3 = 1;
            }
            else
            {
                dia3Otras = 1;
            }
        }

        cout << "Ingrese maquina#:" ;
        cin >> nroMaquina;
    }

    ///
    cout << "PTO A) dia 1: " << piezasDia1 << endl;
    cout << "PTO A) dia 2: " << piezasDia2 << endl;
    cout << "PTO A) dia 3: " << piezasDia3 << endl;

    if(dia1maq3==1 && dia1Otras==0){
        cout  <<"El dia 1 solo tuvo produccion de la maquina 3" << endl;
    }
    if(dia2maq3==1 && dia2Otras==0){
        cout <<"El dia 2 solo tuvo produccion de la maquina 3" << endl;
    }
    if(dia3maq3==1 && dia3Otras==0){
        cout <<"El dia 3 solo tuvo produccion de la maquina 3" << endl;
    }

    return 0;
}
