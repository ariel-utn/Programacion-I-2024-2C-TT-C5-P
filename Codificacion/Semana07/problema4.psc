Algoritmo problema4
	// GRUPO -> DESTINOS TURISTICOS
	// TOTAL
	acuPTOA = 0
	Leer codDestino, nroMes, cantPasajes, totalRec
	Mientras codDestino != 0 Hacer
		// GRUPO X GRPO
		acuPTOB = 0
		ant = codDestino
		// MESES
		Mientras codDestino == ant Hacer
			///// PROCESO CADA REGISTRO - > VIAJE
			acuPTOA = acuPTOA + cantPasajes
			acuPTOb = acuPTOB + totalRec
			// AL FINAL DEL WHILE LEO EL SIGUIENTE REGISTRO
			Leer codDestino, nroMes, cantPasajes, totalRec
		FinMientras
		// INFO GRUPO X GRUPO
		Escribir "El destino ", ant, " recaudo $ ", acuPTOB
	FinMientras
	// INFO TOTAL
	Escribir "Cant. pasajes: ", acuPTOA
FinAlgoritmo
