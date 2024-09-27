Algoritmo EJEMPLO_01
	CGPC = 0
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Leer num
		band = 0
		cprimo = 0
		Mientras num != 0 Hacer
			CD = 0
			Para j<-1 Hasta num Con Paso 1 Hacer
				Si num%j == 0 Entonces
					CD = CD +1
				FinSi
			FinPara
			Si CD == 2 Entonces
				cprimo = cprimo +1
			SiNo
				cprimo = 0
			FinSi
			Si cprimo==4 Entonces
				band = 1
			FinSi
			Leer num
		FinMientras
		Si band==1 Entonces
			CGPC = CGPC + 1
		FinSi
	FinPara
	Escribir "TOTAL GR  4 PRIMOS CONS ", CGPC
FinAlgoritmo
