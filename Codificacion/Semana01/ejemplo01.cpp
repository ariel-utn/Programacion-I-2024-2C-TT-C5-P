#include <iostream>
using namespace std;
int main(){
	
	/// UNA LINEA COMENTADA
	
	/*  COMENTARIO
		DE 
		MULTIPLE
		LINEAS
	*/
	
	/*
	/// TIPOS DE DATOS
	int
	float
	bool
	char
	*/
	
	/// DECLARACION
	int edad;
	
	/// ASIGNACION - - > OPERADOR DE ASIGNACION =
	edad; /// = 21; SI NO LE ASIGNO NADA, CONTIENE BASURA
	
	/// DECLARACION Y ASIGNACION
	int anioNacimiento = 2003;
	
	/// DECLARACIONES Y ASIGNACIONES
	int entero = 1.5;
	float flotante = 1.5F;
	bool boleano = false;
	char caracter = 'A';
	string palabra = "Programación I, comisión turno tarde";

	
	cout << "Entero: " << entero << " Tamaño: " << sizeof entero << "bytes" << endl;
	cout << "Flotante: " << flotante << " Tamaño: "  << sizeof (float) << "bytes" << endl;
	cout << "Boleano: " << boleano  << " Tamaño: "  << sizeof (bool) << "bytes" << endl;
	cout << "Caracter: " << caracter  << " Tamaño: "  << sizeof (char) << "bytes" << endl;	///cout << "Año de nacimiento: " << endl;
	
	/// OPERADORES ARITMETICOS
	/*
	+ 		SUMA
	-		RESTA
	*		PRODUCTO
	/		DIVISION
	%		MODULO
	*/
	
	cout << "La suma de 5 + 8 es: " << 5 + 8 << endl;
	cout << "La resta de 5 - 8 es: " << 5 - 8 << endl;	
	cout << "El producto de 5 * 8 es: " << 5 * 8 << endl;		
	cout << "El cociente de 5 / 8 es: " << 5 / 8 << endl;	
	cout << "El resto de 5 % 8 es: " << 5 % 8 << endl;
	
	
	return 0;
}
