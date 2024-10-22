#include <iostream>
#include "jugar.h"
#include "dados.h"

/**
EL JUGADOR LANZA CINCO DADOS ALEATORIOS POR RONDA.
O LOS VALORES OBTENIDOS EN CADA TIRADA SE ACUMULAN.
O EL JUEGO FINALIZA CUANDO EL JUGADOR ALCANZA LOS 100 PUNTOS.
O MOSTRAR EL NOMBRE DEL JUGADOR, LA CANTIDAD DE RONDAS REALIZADAS Y EL
PUNTAJE TOTAL OBTENIDO.
*/

using namespace std;

void jugar(string &nombre1, int &cantidadRonda1, int &puntajeJugador1){

    int const TAM = 5;
    int vectorDados[TAM];
    int cuentaRondas = 0;

    cout << "Ingrese su nombre: ";
    cin >> nombre1;

    int puntaje = 0;
    do{
        generarTirada(vectorDados, TAM);
        mostrarTirada(vectorDados,TAM);
        cout << endl;
        puntaje += sumaVector(vectorDados, TAM);
        //system("pause");
        cuentaRondas++;


    }while(puntaje<500);

    cout << endl;
    cout << "PUNTAJE TOTAL: " << puntaje << endl;
    cantidadRonda1 = cuentaRondas;
    puntajeJugador1 = puntaje;
    cout << "CANTIDAD DE RONDAS: " << cuentaRondas << endl;


}

int sumaVector(int vec[], int tam){
    int total = 0;
    for(int i = 0; i < tam; i++){
        total += vec[i];
    }
    return total;
}
