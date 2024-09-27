Algoritmo TEMA06_EJ01_D
	// GRUPO: SUCURSAL
	Leer NS,DIA,IMP,VEND,TD,MP
	Q1 = 0; Q2 = 0
	Mientras NS<>0 Hacer
		ANT = NS
		Mientras NS==ANT Hacer
			// PROCESO LOS REGISTROS DE VTAS
			Si DIA < 16 Entonces
				Q1 = Q1+IMP
			SiNo
				Q2 = Q2+IMP
			FinSi
			Leer NS,DIA,IMP,VEND,TD,MP
		FinMientras
	FinMientras
	Escribir "REC Q1: ", Q1
	Escribir "REC Q2: ", Q2
FinAlgoritmo
