Algoritmo TP3_EJ13
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer num
		Si (i == 1) && (num%2 == 0) Entonces
			maxPar = num
		FinSi
		Si (num > maxPar) && (num%2 == 0) Entonces
			maxPar = num
		FinSi
	FinPara
	Escribir "MAXIMO PAR ", maxPar
FinAlgoritmo
