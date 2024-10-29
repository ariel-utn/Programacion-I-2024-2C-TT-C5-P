#include <iostream>
#include "menu.h"
#include <iomanip>

using namespace std;

void menuJugar(int v[], string n[])
{

    char opcion;
    bool  salir = false;

    do
    {
        system("cls");
        cout << "A) INGRESAR PUNTAJE" << endl;
        cout << "B) MOSTRAR ESTADISTICAS" << endl;
        cout << "S) SALIR" << endl;
        cout << "ELIJA OPCION: ";
        cin >> opcion;

        switch(opcion)
        {

        case 'A':
        {
            jugar(v, n);
        }
        break;
        case 'B':
        {
            estadisticas(v, n);
        }
        break;
        case 'S':
        {
            cout << "ADIOS !!!! );" << endl;
            salir = true;
        }
        break;
        default:
        {
            cout <<"OPCION INVALIDA" << endl;
        }
        }

        system("pause");
    }
    while(!salir);


}


void jugar(int v[], string n[])
{
    cout << "INGRESE PUNTAJE: " << endl;
    cin >> v[10];
    cout << "INGRESE NOMBRE: " << endl;
    cin >> n[10];
    ordenarVector(v, n);
}
void estadisticas(int v[], string n[])
{
    system("cls");
    cout << setfill(' ') << setw (9) << "PTOS" << "       " << "NOMBRE" << endl;
    for(int i = 0; i <10; i++)
    {
        cout << setfill(' ') << setw (2) << i + 1 << "#: " << setfill(' ') << setw (3)<< v[i]  << "\t" <<n[i] << endl;
    }
}

void ordenarVector(int v[], string n[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 11; j++)
        {
            if(v[i] < v[j])
            {
                int aux = v[i];
                string nom = n[i];
                v[i] = v[j];
                n[i] = n[j];
                v[j] = aux;
                n[j] = nom;
            }
        }
    }
}
