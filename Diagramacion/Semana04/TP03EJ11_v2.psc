Algoritmo TP03EJ11_v2
	Leer n
	max = n
	min = n
	Para i<-1 Hasta 9 Con Paso 1 Hacer
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
