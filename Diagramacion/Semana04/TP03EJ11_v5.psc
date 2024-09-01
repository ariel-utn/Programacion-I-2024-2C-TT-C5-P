Algoritmo TP03EJ11_v5
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer n
		Si (i==1)||(n>max) Entonces
			max = n
		FinSi
		Si (i==1)||(n<min) Entonces
			min = n
		FinSi
	FinPara
	Escribir 'MAX: ',max
	Escribir 'MIN:',min
FinAlgoritmo
