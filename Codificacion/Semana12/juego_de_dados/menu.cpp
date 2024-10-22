#include <iostream>
#include "menu.h"
#include "jugar.h"
#include "estadisticas.h"

using namespace std;

void menuJuego(){

    string nombreJugador1;
    int cantRondaJugador1;
    int puntajeJugador1;

    bool salir = false;
    char opcion;
    do{
       system("cls");
       menu();
       cin >> opcion;
       switch(opcion){
    case 'A':
        {
            jugar(nombreJugador1, cantRondaJugador1, puntajeJugador1);  /// cargo nombre jugador
        }
    break;
        case 'B':
        {
            cout << "MODO 2 JUGADORES" << endl;
        }
    break;
        case 'C':
        {
            cout << "ESTADISTICAS" << endl;
            mostrarDatosJugador1(nombreJugador1, cantRondaJugador1,puntajeJugador1); /// muestro.....
        }
    break;
        case 'S':
        {
            cout << "SALIR" << endl;
            salir =true;
        }
    break;
        default:
            {
                cout << "ELIJA OPCION VALIDA" << endl;
            }
        break;


       }

    system("pause");
    }while(!salir);

}

void menu(){
    cout << "------------" << endl;
    cout << "A) MODO 1 JUGADOR" << endl;
    cout << "B) MODO 2 JUGADORES" << endl;
    cout << "C) ESTADISTICAS" << endl;
    cout << "S) SALIR" << endl;
    cout << "------------" << endl;
    cout << "ELIJA UNA OPCION: ";
}
