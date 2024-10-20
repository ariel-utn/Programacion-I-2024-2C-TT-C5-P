#include "funciones.h"
#include <iostream>

using namespace std;

/// IMPLEMENTACION DE LAS FUNCIONES
void cargarVector(int v[], int tam){
    for(int r = 0; r < tam; r++){
        cin >> v[r];
    }
}

float calcularPromedio(int v[], int tam){
    int acu = 0;
    int cont = 0;
    float promedio;
    for(int s = 0; s < tam; s++){
        acu += v[s];
        cont++;
    }
    promedio = (float)acu/cont;
    return promedio;
}

void mostrarMayorNumero(int v[], int tam, float num){
    for(int u = 0; u < tam; u++){
        if(v[u] > num)
            cout << v[u] << endl;
    }
}

