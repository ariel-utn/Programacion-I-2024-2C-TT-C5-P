#include <iostream>

using namespace std;

int main()
{
    /// DECLARACION DE VARIABLES
    int codDestino, nroMes, cantPasajes, ant;
    float totalRec, totalRecaudadoPorDestino;

    /// PTO A
    int totalPasajesVendidos = 0;

    cout << "Ingrese destino: ";
    cin >> codDestino;

    while(codDestino != 0)
    {
        /// GUARDO NroDestino Anterior
        ant = codDestino;

        /// PTO B
        totalRecaudadoPorDestino = 0;

        while(codDestino == ant)
        {
            cout << "Ingrese mes: ";
            cin >> nroMes;
            cout << "Ingrese pasajes: ";
            cin >> cantPasajes;
            cout << "Ingrese recaudacion: ";
            cin >> totalRec;

            /// PTO A
            totalPasajesVendidos += cantPasajes;

            /// PTO B
            totalRecaudadoPorDestino += totalRec;

            ///
            cout << "Ingrese destino: ";
            cin >> codDestino;
        }

        /// PTO B
        cout << "PTO B) Total recaudado destino " << ant << " $: " << totalRecaudadoPorDestino << endl;
    }

    /// PTO A
    cout << "PTO A) Total pasajes vendidos: " << totalPasajesVendidos << endl;


    return 0;
}
