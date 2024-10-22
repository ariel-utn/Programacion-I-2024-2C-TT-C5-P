#include <iostream>
#include <ctime>

using namespace std;

int main(){

    /// SEMILLA SIEMPRE EN EL MAIN
    srand(time(0));

    /// DECLARO VECTOR DE 5 DADOS
    int vec[5];

    /// CARGO CADA DADO CON NUMEROS ALEATORIOS
    for (int i = 0; i < 5; i++)
    vec[i]= rand()%6 + 1;

    /// MUESTRO CADA DADO
    for (int i = 0; i < 5; i++)
    cout << vec[i] << endl;

    return 0;
}
