#include <iostream>

using namespace std;

int main() {
	
	/// DECLARACION DE VARIABLES
	int numeroPartido;
	int minutosJugados;
	int tarjetasAmarillas;
	int tarjetasRojas;
	int goles;
	int const TOTAL_PARTIDOS = 19;
	
	/// PTO A
	int contadorPartidosNoJugados = 0;
	
	/// PTO B
	int contadorPartidosCompletos = 0;
	
	/// PTO C
	int contadorTarjetas = 0;
	float promedio;
	
	/// PTO D
	int maxGolesEnUnPartido = 0;
	int numeroPartidoMaxGoles;
	
	/// PTO E
	int contGolesEnPartidosConsecutivos = 0;
	int rachaGolesPartidosConsecutivos = 0;
	
	/// LECTURA DE REGISTROS
	for (int i = 1; i <= TOTAL_PARTIDOS; i++) {
		cout << "Ingrese # partido: ";
		cin >> numeroPartido;
		
		cout << "Minutos jugados: ";
		cin >> minutosJugados;
		
		cout << "Tarjetas amarillas: ";
		cin >> tarjetasAmarillas;
		
		cout << "Tarjetas rojas: ";
		cin >> tarjetasRojas;
		
		cout << "Goles: ";
		cin >> goles;
		
		/// PROCESAMIENTO DE CADA UNO DE LOS REGISTROS
		
		/// PTO A
		if (minutosJugados == 0) {
			contadorPartidosNoJugados++;
		}
		
		/// PTO B
		if (minutosJugados >= 90) {
			contadorPartidosCompletos++;
		}
		
		/// PTO C
		contadorTarjetas = contadorTarjetas + tarjetasAmarillas + tarjetasRojas;
		
		/// PTO D
		if (goles > maxGolesEnUnPartido) {
			maxGolesEnUnPartido = goles;
			numeroPartidoMaxGoles = numeroPartido;
		}
		
		/// PTO E
		if (goles > 0) {
			contGolesEnPartidosConsecutivos++;
		} else {
			contGolesEnPartidosConsecutivos = 0;
		}
		if (contGolesEnPartidosConsecutivos > rachaGolesPartidosConsecutivos) {
			rachaGolesPartidosConsecutivos = contGolesEnPartidosConsecutivos;
		}
	}
	
	system("cls"); /// LIMPIO LA PANTALLA
	
	cout << endl;
	cout << "PTO A: Cantidad de partidos que no jugo: " << contadorPartidosNoJugados << endl;
	
	cout << endl;
	cout << "PTO B: Cantidad de partidos completos: " << contadorPartidosCompletos << endl;
	
	cout << endl;
	promedio = (float) contadorTarjetas / TOTAL_PARTIDOS;
	cout << "PTO C: Promedio tarjetas: " << promedio << endl;
	
	cout << endl;
	cout << "PTO D: Maxima cantidad de goles en un partido: " << maxGolesEnUnPartido;
	cout << " en el partido Nro. " << numeroPartidoMaxGoles << endl;
	
	cout << endl;
	cout << "PTO E: La mejor racha de partidos convirtiendo goles: " << rachaGolesPartidosConsecutivos << endl;
	
	return 0;
}
