Algoritmo TP03EJ09_v4
	bandNum = falso
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer n
		Si bandNum==falso Entonces
			max = n
			bandNum = verdadero
		SiNo
			Si n>max Entonces
				max = n
			FinSi
		FinSi
	FinPara
	Escribir max
FinAlgoritmo
