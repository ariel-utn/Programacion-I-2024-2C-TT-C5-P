#include <iostream>
#include "funciones.h"
#include "menu.h"

using namespace std;

void mostrarMenu()
{
    /// DECLARACION DEL VECTOR
    const int TAM = 10;
    int vec[TAM];
    float promedio;

    bool salir = false;
    char opcion;

    do
    {
        system("cls");
        cout << " A)CARGAR VECTOR " << endl;
        cout << " B)CALCULAR PROMEDIO VECTOR " << endl;
        cout << " C)MOSTRAR > PROMEDIO" << endl;
        cout << "---------------" << endl;
        cout << " S) SALIR PROGRAMA: " << endl;
        cout << "---------------" << endl;
        cout << " ELIJA OPCION: ";
        cin >> opcion;

        switch(opcion)
        {

        case 'A':
        {
            ///CARGAR EL VECTOR
            cargarVector(vec, TAM);
        }
        break;
        case 'B':
        {
            /// CALCULAR PROMEDIO
            promedio = calcularPromedio(vec,TAM);
        }
        break;
        case 'C':
            /// MOSTRAR LOS MAYORES AL PROMEDIO
            cout << "MAYORES AL PROMEDIO: " << endl;
            mostrarMayorNumero(vec,TAM,promedio);
            break;
        case 'S':
            salir = true;
            break;
        }
        system("pause");
    }
    while(!salir);

}
