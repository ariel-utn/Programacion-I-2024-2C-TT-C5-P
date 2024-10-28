#include <iostream>

using namespace std;

int main()
{

    int nroArt, suc, cant;
    float precio;

    /// PTOA
    int vArt[10] {}; /// PONER EN CERO EL VECTOR

    /// PTOB
    float recTotal = 0;

    /// PTOC
    int vSuc[5]{}; /// PONER EN CERO EL VECTOR
    float maximo;
    int maxSuc;

    /// LOTE DE CARGA
    float vPrecio[10];

    for(int i = 1; i <= 10; i++)
    {
        cout << "Numero art: ";
        cin >> nroArt;
        cout << "Precio: ";
        cin >> precio;

        vPrecio[nroArt-1] = precio;
    }

    /// LOTE DE VENTAS

    cout << "Ingrese art: ";
    cin >> nroArt;

    while( nroArt != 0)
    {
        cout << "Ingrese suc: ";
        cin >> suc;
        cout << "Ingrese cant: ";
        cin >> cant;

        /// PTO A
        vArt[nroArt-1] += cant;

        /// PTO B
        recTotal += vPrecio[nroArt-1] * cant;

        /// PTO C
        vSuc[suc-1]+= cant;


        cout << "Ingrese art: ";
        cin >> nroArt;
    }

    system("cls");
    cout << "PTO A)" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << "ART: " << i + 1 << ": " << vArt[i] << endl;
    }

    cout << endl;
    cout << "PTO B)" << endl;
    cout << "Recaudacion $: " <<recTotal << endl;

    cout << "PTO C)" << endl;
    for(int i = 0; i < 10; i++)
    {
        if(i == 0 || vSuc[i] > maximo){
            maximo = vSuc[i];
            maxSuc = i + 1;
        }
    }
    cout << "Sucursal: " << maxSuc << endl;
    return 0;
}
