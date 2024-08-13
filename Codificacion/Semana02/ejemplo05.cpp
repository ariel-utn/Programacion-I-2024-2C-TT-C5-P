#include <iostream>

using namespace std;
/**
    HACER UN PROGRAMA QUE PERMITA CARGAR LA INICIAL DE UN COLOR DE UN SEMAFORO
    E INDIQUE QUE DEBE HACER EL PEATON EN CADA UNO DE LOS CASOS.

    ALTERNATIVA 1
    'V' - - > PUEDE PASAR
    'A' - - > CRUCE CON PRECAUCION
    'R' - - > PROHIBIDO PASAR

    ALTERNATIVA 2
    1 - - > PUEDE CRUZAR
    2 - - > CRUCE CON PRECAUCION
    3 - - > PROHIBIDO PASAR

*/


int main ()
{
    /// DECISION MULTIPLE

    /// char opcion;
    int opcion;
    cout << "Ingrese opcion: ";
    cin >> opcion;

    switch(opcion)
    {
    case 1:
//    case 'v':
        cout << "Puede cruzar!!!" << endl;
        break;
    case 2:
//    case 'a':
        cout << "Cruce con precaucion!!!" << endl;
        break;
    case 3:
//    case 'r':
        cout << "Prohibido pasar!!!" << endl;
        break;
    default:
        cout << "Opcion invalida!!!" << endl;
        break;
    }
    return 0;
}
