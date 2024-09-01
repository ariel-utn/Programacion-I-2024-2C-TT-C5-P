Algoritmo TP03EJ09_v2
	max = -999999
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Leer n
		Si n>=max Entonces
			max = n
			pos = i+1
		FinSi
	FinPara
	Escribir "MAX: ", max
	Escribir "POS: ", pos
FinAlgoritmo
