Algoritmo ejemplo1
	ACU = 0; CONT = 0
	Leer LEGAJO, NOTA
	Mientras LEGAJO != 0 Hacer
		// PROCESO REGISTROS
		ACU = ACU + NOTA
		CONT = CONT + 1
		Leer LEGAJO, NOTA
	FinMientras
	PROM = ACU / CONT
	Escribir "Promedio : ", PROM
FinAlgoritmo
