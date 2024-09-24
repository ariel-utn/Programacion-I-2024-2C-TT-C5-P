Algoritmo tema1_ej1
	// PTO C
	CPAR = 0
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		BPOS = 0; BNEG = 0
		PRIMO = 0; NOPRIMO = 0
		Leer N
		Mientras N != 0 Hacer
			// PTO A
			Si N > 0 Entonces
				Si BPOS == 0 Entonces
					MINPOS = N
					BPOS = 1
				SiNo
					Si (N < MINPOS) Entonces
						MINPOS = N
					FinSi
				FinSi
			SiNo
				Si BNEG == 0 Entonces
					MAXNEG = N
					BNEG = 1
				SiNo
					Si (N > MAXNEG) Entonces
						MAXNEG = N
					FinSi
				FinSi
			FinSi
			// PROCESO TODOS LOS NUMEROS
			// PTO B
			CD = 0
			Para j<-1 Hasta N Con Paso 1 Hacer
				Si N%j == 0 Entonces
					CD = CD +1
				FinSi
			FinPara
			Si CD == 2 Entonces
				PRIMO = PRIMO +1
			SiNo
				NOPRIMO = NOPRIMO + 1
			FinSi
			// PTO C
			Si N%2 == 0 Entonces
				CPAR = CPAR + 1
			FinSi
			Leer N
		FinMientras
		// PTO A
		Escribir "MINIMO POSITIVO: ", MINPOS
		Escribir "MAXIMO NEGATIVO: ", MAXNEG
		// PTO B
		TOTAL = PRIMO  + NOPRIMO
		PORCPRIMO = PRIMO*100/TOTAL
		PORCNOPRIMO = NOPRIMO*100/TOTAL
		Escribir "PORC PRIMO ", PORCPRIMO, "%"
		Escribir "PORC NO PRIMO ", PORCNOPRIMO, "%"
	FinPara
	// PTO C
	Escribir "TOTAL DE PARES: ", CPAR
FinAlgoritmo
