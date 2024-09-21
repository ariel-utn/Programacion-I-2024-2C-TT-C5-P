Algoritmo TP05EJ17
	// TOTAL
	// PTO B
	MAX = 0
	Leer NROART, CV, IMP
	Mientras NROART <>  0 Hacer
		// GR X GR
		// PTO A
		ACU = 0
		// PTO B
		TOT = 0
		ARTANT = NROART
		Mientras NROART == ARTANT Hacer
			// PROCESO CADA VENTA
			// PTO A
			ACU = ACU + IMP
			// PTO B
			TOT = TOT + CV
			Leer NROART, CV, IMP
		FinMientras
		// GR X GR
		Escribir "PT0 A) ART ",ARTANT," REC $ ", ACU
		Si TOT > MAX Entonces
			MAX = TOT
			MAXART = ARTANT
		FinSi
	FinMientras
	// TOTAL
	Escribir "PTO B ARTICULO MAX CANT VEND: ", MAXART
FinAlgoritmo
