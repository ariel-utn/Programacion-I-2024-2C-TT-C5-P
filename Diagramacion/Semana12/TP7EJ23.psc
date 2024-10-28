Algoritmo TP7EJ23
	// PTO A
	Dimension vecVendedores[15]
	// PONER EN CERO EL VECTOR
	Para i<-0 Hasta 14 Con Paso 1 Hacer
		vecVendedores[i] = 0
	FinPara
	// PTO B
	recTotal = 0
	Leer nroVendedor,importeVta
	Mientras nroVendedor!=0 Hacer
		// PROCESO CADA REGISTRO
		// PTO A
		vecVendedores[nroVendedor - 1] = vecVendedores[nroVendedor - 1] + importeVta
		// PTO B
		recTotal = recTotal + importeVta
		Leer nroVendedor,importeVta
	FinMientras
	// PTO A
	max = 0
	Para j<-0 Hasta 14 Con Paso 1 Hacer
		Si vecVendedor[j] > max Entonces
			max = vecVendedor[j]
			maxVend = j+1
		FinSi
	FinPara
	Escribir "PTO A) ", maxVend
	Para j<-0 Hasta 14 Con Paso 1 Hacer
		Si vecVendedor[j] == 0 Entonces
			Escribir "PTO B)", j + 1
		FinSi
	FinPara
	// PTO B
	Escribir "PTO C) ", recTotal
FinAlgoritmo
