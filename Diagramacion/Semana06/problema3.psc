Algoritmo ejemplo3
	// TOTAL
	ACU = 0
	Leer COD_DEST
	Mientras COD_DEST != 0 Hacer
		// GRUPO X GRUPO
		ACU_REC = 0
		Para i<-1 Hasta 12 Con Paso 1 Hacer
			Leer MES, CANTPAS, REC
			// PROCESO CADA VIAJE REALIZADO
			ACU = ACU + CANTPAS
			ACU_REC = ACU_REC + REC
		FinPara
		// GRUPO X GRUPO
		Escribir "TOTAL REC X DESTINO: ", ACU_REC
		Leer COD_DEST
	FinMientras
	// TOTAL
	Escribir "TOTAL PASAJES: ", ACU
FinAlgoritmo
