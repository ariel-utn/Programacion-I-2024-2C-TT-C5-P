Algoritmo TP03EJ13_v3
	bandPar = 0
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer n
		Si n%2==0 Entonces
			Si bandPar==0 Entonces
				maxPar = n
				bandPar = 1
			SiNo
				Si n>maxPar Entonces
					maxPar = n
				FinSi
			FinSi
		FinSi
	FinPara
	Si bandPar==0 Entonces
		Escribir "No hubo pares"
	SiNo
		Escribir 'MAX PAR: ',maxPar
	FinSi
FinAlgoritmo
