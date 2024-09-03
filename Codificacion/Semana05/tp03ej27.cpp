#include <iostream>

/**
Una estación meteorológica registró una muestra climática de los últimos 15
días. Por cada día registró:

- Número de día (entero)
- Temperatura (float)
- Milímetros de lluvia (float)
- Visibilidad en km (float)

Hay un registro por cada día. La información se encuentra ordenada por día. Se
pide calcular e informar:

PTO A- El número del día que se haya registrado la temperatura máxima.
PTO B- La amplitud térmica de todo el período.
PTO C- La cantidad de días con neblina.
PTO D- Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
       Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días. De
       lo contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la
temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.

*/

using namespace std;

int main(){

    /// DECLARACION DE VARIABLES
    int numeroDia; ///úmero de día (entero)
    float temperatura; /// (float)
    float lluvia; ///Milímetros de lluvia (float)
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
