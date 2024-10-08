#include <iostream>
using namespace std;

/*
HACER UN PROGRAMA QUE PERMITA EL INGRESO DE UN NUMERO ENTERO Y DETERMINE Y MUESTRE SI EL MISMO ES PERFECTO O NO PERFECTO.

DE: UN NUMERO ENTERO

OP: DETERMINAR SI EL NUMERO ES PERFECTO O NO
- ACUMULADOR: LOS DIVIDORES PROPIOS
- CICLO EXACTO PARA ITERAR LOS DIVISORES DEL NRO
- AVERIGUO SI ES DIVISOR:  SI ES V -> ACUMULO
- CONDICION: SI LA SUMA ES IGUAL AL NRO INGRESADO -> ES NUMERO PERFECTO.

DS: SI EL NUMERO ES PERFECTO O NO - - > UN SOLO DATO

DIVISOR PROPIOS: LOS NUMEROS NATURALES DESDE 1 HASTA EL INGRESADO, EXCLUYENDOLO.

numero: 5
divisores:
1 -> SI
2 -> NO
3 -> NO
4 -> NO


SUMA= 1
1 == 5 - > EL NUMERO 5 NO ES PERFECTO


*/


/*
FUNCIONES:
SERIE DE INSTRUCCIONES QUE RESUEVEN UN PROBLEMA.

PROTOTIPO - FIRMA - DECLARACION

- TIPO DE RETORNO (DEVUELVE O NO DEVUELVE VALORES)
- NOMBRE_DE_LA_FUNCION (IDENTIFICADOR, ALIAS)
- PAREMETROS DE LA FUNCION -> UNO, MUCHOS O NINGUNO.

TIPO_RETORNO NOMBRE_FUNCION (PARAMETROS)

PARAMETROS 0: ()
PARAMETROS 1: (int num)
PARAMETROS 2: (int num1, int num2)
PARAMETROS X: (int num1, ...., int numX)

LAS FUNCIONES PUEDEN SER LLAMADAS/INVOCADAS DESDE CUALQUIER PARTE DE NUESTRO PROGRAMA

- DECLARACION: 
- IMPLEMENTACION:
- LLAMADA:

*/

// DECLARACION
/// DECLARACION/ TIPO_RETORNO NOMBRE_FUNCION (PARAMETROS)

// TIENE RETORNO -> INT, BOOL, CHAR, STRING, FLOAT, ETC. 
		// return -> palabra reservada para indicar retorno.
// NO TIENE RETORNO - > VOID


/// DECLARACION
bool esPositivo(int num);
bool esPar(int num);
float sumarDosNumeros(float num1, float num2);
void mostrarSiEsPositivo(int num);


int main() {
	
	int num, cont = 0;
	
	for (int i = 0; i < 10; i++){
		cout << "Ingrese #: ";
		cin >> num;
		if(esPositivo(num)){
			cont++;
		}
	}
	
	cout << "Total positivos: " << cont << endl;
}

/// IMPLEMENTACION/DEFINICION
bool esPositivo(int num){	
	if(num > 0)
		return true;
	return false;
}

bool esPar(int num){
	if(num %2 == 0)
		return true;
	return false;
}

float sumarDosNumeros(float num1, float num2){
	float suma;
	suma = num1 + num2;
	return suma;
}

void mostrarSiEsPositivo(int num){
	if(num > 0){
		cout << "El numero " << num << " es positivo";
	}
}
