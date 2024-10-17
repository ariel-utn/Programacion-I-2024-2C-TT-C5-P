#include <iostream>

using namespace std;

int main()
{

    /** DECLARACION

    tipo_dato nombre[cantidad_elementos];

    */

    /// DECLARACION
    int const TAM = 7;
    int vec[TAM];

    /// DECLARACION DE UN VECTOR Y PONER EN CERO
    int vec2[5] = {};

    /// DECLARACION ASIGNACION DE VALORES A UN VECTOR

    int vec3[5] = {-1,3,-11-4,9};
    string vecPalosBaraja[4] = {"Corazon", "Pica", "Diamante", "Trebol"};

    /// CARGAR UN ELEMENTO DEL VECTOR
    cout << "CARGAR UN ELEMENTO DEL VECTOR" << endl;
    cin >> vec[0];

    /// ASIGNAR UN ELEMENTO DEL VECTOR
    cout << "ASIGNAR UN ELEMENTO DEL VECTOR" << endl;
    vec[1] = 33;

    /// MOSTRAR EL CONTENIDO DE UN ELEMENTO DEL VECTOR
    cout << vec[1] << endl;

    /// PONER EN CERO VECTOR USANDO CICLO
    for (int i = 0; i < TAM; i++){
        vec[i] = 0;
    }

    /// CARGAR VECTOR USANDO CICLO
    cout << "CARGAR VECTOR USANDO CICLO" << endl;
    for (int i = 0; i < TAM; i++){
        cin >> vec[i];
    }

    /// MOSTRAR UN VECTOR USANDO CICLO
    cout << "MOSTRAR UN VECTOR USANDO CICLO" << endl;
    for (int i = 0; i < TAM; i++){
        cout << vec[i] << endl;
    }


    return 0;
}
