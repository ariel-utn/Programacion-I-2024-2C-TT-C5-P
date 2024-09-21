Algoritmo TP05EJ07
	// TOTAL
	// PTO C
	MAX = -999999
	// PTO B
	MIN = 999999
	Para G<-1 Hasta 10 Con Paso 1 Hacer
		// GR X GR
		// PTO A
		CONT = 0; ACU = 0
		Leer N
		Mientras N <> 0 Hacer
			// PTO A
			CONT = CONT+1
			ACU = ACU+N
			// PTO B
			Si N<MIN Entonces
				MIN = N
				MINPOS = CONT
				MINGR = G
			FinSi
			Leer N
		FinMientras
		// INFO GR X GR
		// PTO A
		PROM = ACU/CONT
		// PTO C
		Si PROM>MAX Entonces
			MAX = PROM
			MAXGR = G
		FinSi
		// PTO A
		Escribir 'EL PROM. DEL GR ',G,' ES: ',PROM
	FinPara
	// INFO TOTAL
	// PTO C
	Escribir 'EL MAX PROM ES: ',MAX,' DEL GRUPO ',MAXGR
	// PTO B
	Escribir 'MINIMO ES ',MIN, " POSICION ", MINPOS, " GRUPO ", MINGR
FinAlgoritmo
