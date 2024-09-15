Algoritmo ejemplo2
	// PARA TOTAL
	acu = 0
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		// PARA GRUPO X GRUPO
		acuRecaudacion = 0
		Leer codDestino, mes, cantidadPasajes, recaudacion
		Mientras mes != 0 Hacer
			///// PROCESO CADA REGISTRO
			acu = acu +cantidadPasajes
			acuRecaudacion = acuRecaudacion + recaudacion
			Leer codDestino, mes, cantidadPasajes, recaudacion
		FinMientras
		// PARA GRUPO X GRUPO
		Escribir "Total recaudacion: ", acuRecaudacion
	FinPara
	// PARA TOTAL
	Escribir "Total pasajes: ", acu
FinAlgoritmo
