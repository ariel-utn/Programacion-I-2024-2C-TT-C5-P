Algoritmo EJEMPLO03
	CGO = 0
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Leer num
		CN = 0
		BO = 1
		Mientras num != 0 Hacer
			CN = CN +1
			Si CN > 1 Entonces
				Si NUM < ANT Entonces
					BO = 0
				FinSi
			FinSi
			ANT = NUM
			Leer num
		FinMientras
		Si BO == 1 Entonces
			CGO = CGO +1
		FinSi
	FinPara
	Escribir "TOTAL GR. ORD CREC: ", CGO
FinAlgoritmo
