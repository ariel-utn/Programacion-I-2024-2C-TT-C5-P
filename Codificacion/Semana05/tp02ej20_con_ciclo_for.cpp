#include <iostream>
using namespace std;

/**

Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego,
calcular e informar:

PTO A) La cantidad de personas mayores a 30 años que midan más de 1.8 metros.

PTO B) El promedio de altura de las personas mayores a 30 años.

PTO C) La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)

PTO D) La cantidad de personas cuya edad sea de 20, 30 o 40 años.

*/

int main() {
	
	/// DECLARACION
	int edad;
	float altura;
	
	/// PTO A
	int cantMayores30ymas180altura = 0;
	
	/// PTO B
	int cantMayores30 = 0;
	float acuAlturaMayores30 = 0;
	float promedio;
	
	/// PTO C
	int contAlturaEntre170y180 = 0;
	
	/// PTO D
	int cant_20_30_o_40 = 0;
	
	/// PROCESAMIENTO DE DATOS
	for(int i = 0; i < 5; i++){
		cout << "Ingrese edad: ";
		cin >> edad;
		
		cout << "Ingrese altura: ";
		cin >> altura;
		
		/// PTO A
		if(edad >30 && altura > 1.80f){
			cantMayores30ymas180altura++;
		}
		
		/// PTO B
		if(edad > 30){
			cantMayores30++;
			acuAlturaMayores30+=altura;
		}
		
		/// PTO C
		if(altura >= 1.70f && altura <= 1.80f){
			contAlturaEntre170y180++;
		}
		
		/// PTO D
		if((edad == 20) || (edad == 30) || (edad == 40)){
			cant_20_30_o_40++;
		}
		
	}
	
	/// LIMPIAR PANTALLA
	system("cls");
	
	/// LISTAR INFORMACION
	
	/// PTO A
	cout << "PTO A) La cantidad de personas mayores";
	cout << " a 30 años que midan más de 1.8 metros: " << cantMayores30ymas180altura;
	
	cout << endl << endl;
	/// PTO B
	if(cantMayores30 > 0){
		promedio = (float)acuAlturaMayores30 / cantMayores30;
		cout << "PTO B) El promedio de altura de las personas mayores a 30 años: " << promedio << endl;
	}
	else{
		cout << "No hay personas mayores a 30" << endl;
	}
	
	cout << endl << endl;
	/// PTO C
	cout << "PTO C) La cantidad de personas con altura entre 1.7 y 1.8: " << contAlturaEntre170y180 << endl;
	
	cout << endl << endl;
	/// PTO D
	cout << "PTO D) La cantidad de personas cuya edad sea de 20, 30 o 40 años: " << cant_20_30_o_40 << endl;
	
	return 0;
}

