Algoritmo TP7EJ26
	// LOTE DE CARGA
	DIMENSION vPrecio[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer ART, PRE
		vPrecio[ART-1] = PRE
	FinPara
	// LOTE DE VENTAS
	// PTO A
	DIMENSION vART[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		vART[i] = 0
	FinPara
	// PTO B
	RECTOTAL = 0
	// PTO C
	DIMENSION vSUC[5]
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		vSUC[i] = 0
	FinPara
	Leer ART, SUC, CANT
	Mientras ART != 0 Hacer
		// PROCESO VENTAS
		// PTO A
		vART[ART-1] = vART[ART-1] + CANT 
		// PTO B
		RECTOTAL = RECTOTAL + (vPrecio[ART-1] * CANT)
		// PTO C
		vSUC[SUC-1] = vSUC[SUC-1] + CANT
		Leer ART, SUC, CANT
	FinMientras
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir "ART ", i +1 , " VENDIO: ", vART[i] ," UNIDADES"
	FinPara
	Escribir "REC TOTAL: ", RECTOTAL
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Si i==0 Entonces
			max = vSUC[i]
		SiNo
			Si vSUC[i] > max Entonces
				max = vSUC[i]
				maxSuc = i+1
			FinSi
		FinSi
	FinPara
	Escribir "MAX SUC: ", maxSuc
FinAlgoritmo
