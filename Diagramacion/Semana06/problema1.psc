Algoritmo problema1
	// VARIABLES/CONT/ACU/BAND TOTAL- > UNA SOLA VEZ
	ACU = 0
	// GRUPO -> DESTINO TURISTICO
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		// VARIABLES/CONT/ACU/BAND GRUPO X GRUPO - > EQUIS CANTIDAD DE VECES
		ACU_REC = 0
		Para j<-1 Hasta 12 Con Paso 1 Hacer
			Leer ncodDestino, nroMes, cantPasajes, totalRec
			// PROCESO - > CADA VIAJES
			ACU = ACU + cantPasajes
			ACU_REC = ACU_REC + totalRec
		FinPara
		// INF GRUPO X GRUPO -> EQUIS CANTIDAD DE VECES
		Escribir "Total rec. x codigo destino: ", ACU_REC
	FinPara
	// INF TOTAL -> UNA VEZ
	Escribir "Total pasajes vendidos: ", ACU
FinAlgoritmo
