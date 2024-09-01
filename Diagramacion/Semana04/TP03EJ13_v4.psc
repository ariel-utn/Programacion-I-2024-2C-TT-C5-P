Algoritmo TP03EJ13_v4
	bandPar = 0
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer n
		Si n%2==0 Entonces
			Si (bandPar==0) || (n>maxPar) Entonces
				maxPar = n
				bandPar = 1
			FinSi
		FinSi
	FinPara
	Si bandPar==0 Entonces
		Escribir 'No hubo pares'
	SiNo
		Escribir 'MAX PAR: ',maxPar
	FinSi
FinAlgoritmo
