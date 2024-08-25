#include <iostream>

using namespace std;

/**
Este código en C++ imprime los caracteres correspondientes a los valores ASCII en el rango de 65 a 90.

Declara variables: Define i, valorInicial, y valorTope como enteros.

valorInicial se inicializa en 65 y valorTope en 90.

Ciclo for: Itera desde valorInicial (65) hasta valorTope (90), ambos inclusive.

Imprime caracteres: En cada iteración del ciclo, el valor de i se convierte a su correspondiente carácter ASCII usando (char)i y se imprime en la consola seguido de un salto de línea.

Valores ASCII: Los valores ASCII de 65 a 90 corresponden a las letras mayúsculas de la A a la Z.

Resultado: El código imprimirá las letras mayúsculas del alfabeto, una por línea, desde A hasta Z.
*/

int main (){

    int i;
    int valorInicial = 65;
    int valorTope = 90;

    for (i = valorInicial; i <= valorTope; i++){
        cout << (char)i << endl;
    }

    return 0;
}
