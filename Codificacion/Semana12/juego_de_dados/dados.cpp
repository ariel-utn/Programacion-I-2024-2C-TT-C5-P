#include <iostream>
#include "dados.h"


using namespace std;

int generarNumeroAleatorio(int rango){

    return rand()%rango + 1;
}

void generarTirada(int vectorDados[], int tam){
    for(int i = 0; i < tam; i++){
        vectorDados[i] = generarNumeroAleatorio(6);
    }
}

void mostrarTirada(int vectorDados[], int tam){
    for(int i = 0; i < tam; i++){
        cout << vectorDados[i] << " ";
    }
}
