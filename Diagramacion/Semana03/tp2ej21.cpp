#include <iostream>
using namespace std;

/**

21 Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40 marrones y 49 grises. 

Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:

Cantidad de carteras
Tipo de cartera (1 Blanco, 2 Negro, 3 Marrón, 4 Gris)

Calcular e informar:

Cantidad total de carteras vendidas en total.
Cuántas carteras quedaron de cada tipo.
Los colores de carteras que no se vendieron.

NOTA: Ninguna venta superará las 10 carteras.

*/

int main() {
	
	/// CANTIDADES INICIALES DE CARTERAS
	const int BLANCAS = 45;
	const int NEGRAS = 50;
	const int MARRONES = 40;
	const int GRISES = 49;

	/// DECLARACION DE VARIABLES
	int cantidadVenta;
	char tipoCartera;
	
	/// PTO A
	int cantidadTotalVendida = 0;
	
	/// PTO B
	int vtaBlancas, vtaNegras, vtaMarrones, vtaGrises;
	vtaBlancas = vtaGrises = vtaMarrones = vtaNegras = 0;
	
	/// PTO C
	bool bandBlanca, bandNegra, bandMarron, bandGris;
	bandBlanca = bandGris = bandMarron = bandNegra = false;
	
	/// DATOS DE ENTRADA
	cout << "Ingrese cantidad carteras vendidas: ";
	cin >> cantidadVenta;
	
	cout << "Tipo de cartera ";
	cout << "(1 Blanco, 2 Negro, 3 Marrón, 4 Gris): ";
	cin >> tipoCartera;
	
	/// PTO A
	cantidadTotalVendida += cantidadVenta; 
	
	
	switch(tipoCartera){
	case '1': {
		vtaBlancas += cantidadVenta;
		bandBlanca = true;
	}
	break;
	case '2':{
		vtaNegras += cantidadVenta;
		bandNegra = true;
	}
	break;
	case '3': {
		vtaMarrones += cantidadVenta;
		bandMarron = true;
	}
	break;
	case '4':{
		vtaGrises += cantidadVenta;
		bandGris = true;
	}
	break;		
	}
	
	/// DATOS DE ENTRADA
	cout << "Ingrese cantidad carteras vendidas: ";
	cin >> cantidadVenta;
	
	cout << "Tipo de cartera ";
	cout << "(1 Blanco, 2 Negro, 3 Marrón, 4 Gris): ";
	cin >> tipoCartera;
	
	/// PTO A
	cantidadTotalVendida += cantidadVenta; 
	
	
	switch(tipoCartera){
	case '1': {
		vtaBlancas += cantidadVenta;
		bandBlanca = true;
	}
	break;
	case '2':{
		vtaNegras += cantidadVenta;
		bandNegra = true;
	}
		break;
	case '3': {
		vtaMarrones += cantidadVenta;
		bandMarron = true;
	}
	break;
	case '4':{
		vtaGrises += cantidadVenta;
		bandGris = true;
	}
		break;		
	}
	
	/// DATOS DE ENTRADA
	cout << "Ingrese cantidad carteras vendidas: ";
	cin >> cantidadVenta;
	
	cout << "Tipo de cartera ";
	cout << "(1 Blanco, 2 Negro, 3 Marrón, 4 Gris): ";
	cin >> tipoCartera;
	
	/// PTO A
	cantidadTotalVendida += cantidadVenta; 
	
	
	switch(tipoCartera){
	case '1': {
		vtaBlancas += cantidadVenta;
		bandBlanca = true;
	}
	break;
	case '2':{
		vtaNegras += cantidadVenta;
		bandNegra = true;
	}
		break;
	case '3': {
		vtaMarrones += cantidadVenta;
		bandMarron = true;
	}
	break;
	case '4':{
		vtaGrises += cantidadVenta;
		bandGris = true;
	}
		break;		
	}
	
	/// PTO A
	cout << endl;
	cout << "PTO A" << endl;
	cout << "Cantidad total vendida: " << cantidadTotalVendida << endl;
	
	/// PTO B
	cout << endl;
	cout << "PTO B" << endl;
	cout << "Total carteras blancas: " << BLANCAS - vtaBlancas << endl;
	cout << "Total carteras negras: " << NEGRAS - vtaNegras << endl;
	cout << "Total carteras marrones: " << MARRONES - vtaMarrones << endl;
	cout << "Total carteras grises: " << GRISES - vtaGrises << endl;
	
	/// PTO C
	cout << endl;
	cout << "PTO C" << endl;
	if(bandBlanca == false){
		cout << "No se vendieron carteras blancas" << endl;
	}
	if(bandNegra == false){
		cout << "No se vendieron carteras negras" << endl;
	}
	if(bandMarron == false){
		cout << "No se vendieron carteras marrones" << endl;
	}
	if(bandGris == false){
		cout << "No se vendieron carteras grises" << endl;
	}
	
	return 0;
}

