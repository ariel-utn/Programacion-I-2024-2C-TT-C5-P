Algoritmo TP03EJ13_v2
	maxPar = -999999
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer n
		Si n%2==0 Entonces
			Si n>maxPar Entonces
				maxPar = n
			FinSi
		FinSi
	FinPara
	Escribir 'MAX PAR: ',maxPar
FinAlgoritmo
