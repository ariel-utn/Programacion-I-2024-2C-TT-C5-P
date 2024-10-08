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
	- IMPLEMENTACION
	- LLAMADA
*/

void mostrarSiEsPerfecto(int numero);
bool esPerfecto(int numero);


int main() {
	int cont = 0, n;
	for(int i = 1; i <= 5; i++){
		
	cin >> n;
	if(esPerfecto(n)){
		cont++;
		}
}
	cout << "Total nros perf. " << cont << endl;
	return 0;
}

void mostrarSiEsPerfecto(int numero){
	
	int acumuladorDivisores = 0;
	for (int i = 1; i < numero; i++){
		if(numero%i==0)	{
			acumuladorDivisores += i;
		}
	}
	if(acumuladorDivisores==numero){
		cout << "El numero " << numero  << " es PERFECTO" << endl;
	}
	else{
		cout << "El numero " << numero  << " es NO PERFECTO" << endl;
	}	
}

	
	
	
	
	
	
	bool esPerfecto(int numero){
		
		int acumuladorDivisores = 0;
		for (int i = 1; i < numero; i++){
			if(numero%i==0)	{
				acumuladorDivisores += i;
			}
		}
		if(acumuladorDivisores==numero){
			return true;
		}
		return false;
	}
