Algoritmo TP03EJ11_v3
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer n
		Si i==1 Entonces
			min = n
			max = n
		SiNo
			Si n>max Entonces
				max = n
			SiNo
				Si n<min Entonces
					min = n
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir 'MAX: ',max
	Escribir 'MIN:',min
FinAlgoritmo
