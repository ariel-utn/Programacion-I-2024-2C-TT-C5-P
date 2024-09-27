Algoritmo EJEMPLO_02
	CGPA = 0
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Leer NUM
		BA = 1
		CP = 0; CN = 0
		Mientras NUM != 0 Hacer
			// averiguo si el numero es perfecto o no
			SD = 0
			Para j<-1 Hasta NUM -1 Con Paso 1 Hacer
				Si NUM%j == 0 Entonces
					SD = SD + j
				FinSi
			FinPara
			Si SD == NUM Entonces
				// POS
				CP = CP +1
				CN = 0
			SiNo
				// NEG
				CN = CN +1
				CP = 0
			FinSi
			Si (CP == 2) || (CN == 2) Entonces
				BA = 0
			FinSi
			Leer NUM
		FinMientras
		Si BA == 1 Entonces
			CGPA = CGPA +1
		FinSi
	FinPara
	Escribir "TOTAL GRUPOS PERF ALTERNADOS: ", CGPA
FinAlgoritmo
