#include <iostream>
#include "rlutil.h"
#include <ctime>

using namespace std;

void dibujarLinea()
{
    /// OCULTAR CURSOR
    rlutil::hidecursor();

    for(int i = 0; i < 50; i++)
    {
        rlutil::setColor(i%16);
        cout << (char)219;
//    cout << i << " - " << i%16 << endl;
        rlutil::msleep(rand()%500+1);
    }

    /// MOSTRAR CURSOR
    rlutil::showcursor();
}

void escribirTexto(string texto)
{
    rlutil::setBackgroundColor(rlutil::YELLOW);
    rlutil::setColor(rlutil::MAGENTA);
    cout << texto << endl;


}

void dibujarDado(int x, int y, int v)
{
    rlutil::setBackgroundColor(rlutil::YELLOW);
    rlutil::setColor(rlutil::BLUE);

    for(int i = 0; i <3; i++)
    {
        for(int j=0; j<7; j++)
        {
            rlutil::locate(x+j,y+i);

            /// 1
            if(v==1 && i==1 && j==3)
            {
                cout << (char)254;
            }
            /// 2
            if(v==2 && i==0 && j==1)
            {
                cout << (char)220;
            }
            if(v==2 && i==2 && j==5)
            {
                cout << (char)223;
            }
            /// 3
            if(v==3 && i==0 && j==1)
            {
                cout << (char)220;
            }
            if(v==3 && i==1 && j==3)
            {
                cout << (char)254;
            }
            if(v==3 && i==2 && j==5)
            {
                cout << (char)223;
            }

            /// 4
            if(v==4 && i==0 && j==1)
            {
                cout << (char)220;
            }
            if(v==4 && i==0 && j==5)
            {
                cout << (char)220;
            }
            if(v==4 && i==2 && j==1)
            {
                cout << (char)223;
            }
            if(v==4 && i==2 && j==5)
            {
                cout << (char)223;
            }
            /// 5
            if(v==5 && i==0 && j==1)
            {
                cout << (char)220;
            }
            if(v==5 && i==0 && j==5)
            {
                cout << (char)220;
            }
            if(v==5 && i==1 && j==3)
            {
                cout << (char)254;
            }
            if(v==5 && i==2 && j==1)
            {
                cout << (char)223;
            }
            if(v==5 && i==2 && j==5)
            {
                cout << (char)223;
            }
            /// 6
            if(v==6 && i==0 && j==1)
            {
                cout << (char)220;
            }
            if(v==6 && i==0 && j==3)
            {
                cout << (char)220;
            }
            if(v==6 && i==0 && j==5)
            {
                cout << (char)220;
            }
            if(v==6 && i==2 && j==1)
            {
                cout << (char)223;
            }
            if(v==6 && i==2 && j==3)
            {
                cout << (char)223;
            }
            if(v==6 && i==2 && j==5)
            {
            cout << (char)223;
            }
            cout << " ";
        }
        cout << endl;
    }

}

int main()
{
    rlutil::saveDefaultColor();
    /// semilla
    srand(time(0));

    /// CONFIGURO POSICION
    ///dibujarLinea();
    //escribirTexto("Bienvenidos a pr1");

    rlutil::resetColor();
    rlutil::cls();

    dibujarDado(3,2, 1);
    dibujarDado(12,2, 2);
    dibujarDado(21,2, 3);
    dibujarDado(30,2, 4);
    dibujarDado(39,2, 5);
    dibujarDado(48,2, 6);



    rlutil::resetColor();

    /**
    // GUARDAR LA CONFIGURACION DE LA CONSOLA
    rlutil::saveDefaultColor();


    /// cout << "Cantidad filas: " << rlutil::trows() << endl;
    /// cout << "Cantidad columnas: " << rlutil::tcols() << endl;


    ///rlutil::setColor(rlutil::GREEN);
    for(int i = 0; i < 1; i++){
    rlutil::setColor(rlutil::RED);
    rlutil::setBackgroundColor(rlutil::WHITE);
    cout << "hola mundo";
    }

    /// PONER PAUSA
    /// system("pause");
    rlutil::anykey();

    /// RESETEAR LA CONFIGURACION ORIGINAL
    rlutil::resetColor();

    /// LIMPIAR PANTALLA
    /// system("cls");
    rlutil::cls();
    */




    return 0;
}
