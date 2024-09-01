Algoritmo TP03EJ13_v1
	cp = 0
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer n
		Si (n%2 == 0) Entonces
			cp = cp +1
			Si cp==1 Entonces
				maxPar = n
			SiNo
				Si n>maxPar Entonces
					maxPar = n
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir "MAX PAR: ", maxPar
FinAlgoritmo
