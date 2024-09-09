Algoritmo tp03ej16_v2
	max1 = -99999
	max2 = -99999
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer num
		Si num>max1 Entonces
			max2 = max1
			max1 = num
		SiNo
			Si num>max2 Entonces
				max2 = num
			FinSi
		FinSi
	FinPara
	Escribir 'MAX1: ',max1
	Escribir 'MAX2: ',max2
FinAlgoritmo
