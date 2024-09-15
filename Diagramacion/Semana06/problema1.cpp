#include <iostream>
using namespace std;

int main() {
	
	/// DECLARACION DE VARIABLES
	int codDestino, nroMes,cantPasajes;
	float totalRec;
	
	/// VARIABLES PARA TOTAL DE REGISTROS
	
	/// PTO A
	int acumuladorPasajes = 0;
	
	/// ESTRUCTURA GENERAL DE LECTURAS DE REGISTROS
	/// DATO AGRUPADO / GRUPO - > DESTINO DE VIAJE
	for(int i = 1; i <= 5; i++){
		
		/// VARIABLES GRUPO X GRUPO
		
		/// PTO B
		int acumuladorRecaudacion = 0;
		
		/// CANTIDAD DE REGISTROS POR CODIGO DE DESTINO: 12 (UNO POR MES)
		for (int j = 1; j <= 12; j++){
			
			cout << "Ingrese codigo: ";
			cin >> codDestino;
			
			cout << "Ingrese mes: ";
			cin >> nroMes;
			
			cout << "Ingrese cantida pasajes: ";
			cin >> cantPasajes;
			
			cout << "Ingrese recaudacion: ";
			cin >> totalRec;
			
			/// PROCESO CADA REGISTRO DE VIAJE
			
			/// PTO A
			acumuladorPasajes += cantPasajes;
			
			/// PTO B
			acumuladorRecaudacion += totalRec;
		}
		cout << endl;
		
		/// INFO GRUPO X GRUPO
		cout << "Recaudacion destino " << codDestino << " $: " << acumuladorRecaudacion << endl;
	}
	
	/// INFO PARA EL TOTAL DE REGISTROS
	/// PTO A
	cout << "Total pasajes vendido: " << acumuladorPasajes << endl;
	
	return 0;
}

