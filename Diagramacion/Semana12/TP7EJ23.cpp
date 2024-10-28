#include <iostream>

using namespace std;

int buscarMaximo(float v[], int t);
void mostrarVendedoresSinVentas(float v[], int t);

int main(){

    int nroVendedor;
    float importeVta;

    /// PTOA y PTOB
    float vecPTOA[15]{}; /// PONER VECTOR EN CERO

    /// PTO C
    float recTotal = 0;

    cout << "Ingrese # vendedor: ";
    cin >> nroVendedor;


    while(nroVendedor !=0){

    cout << "Ingrese importe venta: ";
    cin >> importeVta;

    /// PROCESO LAS VENTAS
    /// PTOA
    vecPTOA[nroVendedor-1]+=importeVta;

    /// PTO C
    recTotal += importeVta;


    cout << "Ingrese # vendedor: ";
    cin >> nroVendedor;
    }

    system("cls");

    /// PTO A
    int vendedor = buscarMaximo(vecPTOA,15);
    cout << "PTO A) " << endl;
    cout << "El numero de vendedor que mas vendio: " << vendedor + 1 << endl;

    cout << "PTO B) " << endl;
    cout << "Vendedores que no hayan realizado ventas: " << endl;
    mostrarVendedoresSinVentas(vecPTOA,15);

    cout << "PTO C) " << endl;
    cout << "Recaudacion total $: " << recTotal << endl;


	return 0;
}

int buscarMaximo(float v[], int t){
    int maximo, maximoVendedor;
    for(int i = 0; i < t; i++){
        if(i==0 || v[i] > maximo){
            maximo = v[i];
            maximoVendedor = i;
        }
    }
    return maximoVendedor;
}

void mostrarVendedoresSinVentas(float v[], int t){
    for(int i = 0; i < t; i++){
        if(v[i] == 0){
            cout << i + 1 << endl;
        }
    }
}
