Algoritmo TEMA06_EJ01_C
	// GRUPO: SUCURSAL
	Leer NS,DIA,IMP,VEND,TD,MP
	Mientras NS<>0 Hacer
		MAX = 0
		ANT = NS
		Mientras NS==ANT Hacer
			Si (IMP > MAX ) & (TD == 2) Entonces
				MAX = IMP
				MAXDIA = DIA
				MAXVEND = VEND
			FinSi
			// PROCESO LOS REGISTROS DE VTAS
			Leer NS,DIA,IMP,VEND,TD,MP
		FinMientras
		Escribir "SUC: ", ANT, " IMP MAX: ", MAX, " DIA: ", MAXDIA, " VEND: ",  MAXVEND
	FinMientras
FinAlgoritmo
