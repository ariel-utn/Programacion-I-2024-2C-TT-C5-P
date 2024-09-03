#include <iostream>

/**
Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15
d�as. Por cada d�a registr�:

- N�mero de d�a (entero)
- Temperatura (float)
- Mil�metros de lluvia (float)
- Visibilidad en km (float)

Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se
pide calcular e informar:

PTO A- El n�mero del d�a que se haya registrado la temperatura m�xima.
PTO B- La amplitud t�rmica de todo el per�odo.
PTO C- La cantidad de d�as con neblina.
PTO D- Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia.
       Mostrar "Quincena h�meda" si llovi� en al menos un tercio de los d�as. De
       lo contrario mostrar "Quincena seca".

NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
temperatura m�nima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.

*/

using namespace std;

int main(){

    /// DECLARACION DE VARIABLES
    int numeroDia; ///�mero de d�a (entero)
    float temperatura; /// (float)
    float lluvia; ///Mil�metros de lluvia (float)
    float visibilidad; ///- Visibilidad en km (float)

    /// PTO A
    float maxTemp;
    int diaMaxTemp;

    /// PTO B
    float tempMax;
    float tempMin;
    float amplitudTermica;

    /// PTO C
    int contDiasConNeblina = 0;

    /// LECTURA DE REGISTROS
    for (int i = 1; i <= 15; i++){
        cout << "Ingrese # dia: ";
        cin >> numeroDia;

        cout << "Ingrese temperatura: ";
        cin >> temperatura;

        cout << "Ingrese cantidad lluvia: ";
        cin >> lluvia;

        cout << "Ingrese visibilidad: ";
        cin >> visibilidad;

        /// PROCESO
        /// PTO A
        /**
        if(i==1){
            maxTemp = temperatura;
            diaMaxTemp = numeroDia;
        }
        else if(temperatura > maxTemp){
            maxTemp = temperatura;
            diaMaxTemp = numeroDia;
        }
        */
        if( (i == 1) || ( temperatura > maxTemp )){
            maxTemp = temperatura;
            diaMaxTemp = numeroDia;
        }

        /// PTO B
        /**
        if(i==1){
            tempMax = temperatura;
            tempMin = temperatura;
        }
        else{
            if(temperatura > tempMax){
                tempMax = temperatura;
            }
            if(temperatura < tempMin){
                tempMin = temperatura;
            }
        }
        */
        if( (i==1) || (temperatura > tempMax) ){
            tempMax = temperatura;
        }
        if( (i==1) || ( temperatura < tempMin)){
            tempMin = temperatura;
        }

        if(visibilidad < 2){
            contDiasConNeblina++;
        }

    }
    system("cls");

    cout << endl << endl;
    cout << "PTO A) DIA MAXIMA TEMPERATURA: " << diaMaxTemp << endl;

    cout << endl << endl;
    amplitudTermica = tempMax - tempMin;
    cout << "PTO B) AMPLITUD TERMICA: " << amplitudTermica << endl;

    cout << endl << endl;
    cout << "PTO C) CANTIDAD DIAS CON NEBLINA: " << contDiasConNeblina << endl;


	return 0;
}
