Algoritmo TP03EJ11_v4
	min = 999999
	max = -999999
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer n
		Si n>max Entonces
			max = n
		SiNo
			Si n<min Entonces
				min = n
			FinSi
		FinSi
	FinPara
	Escribir 'MAX: ',max
	Escribir 'MIN:',min
FinAlgoritmo