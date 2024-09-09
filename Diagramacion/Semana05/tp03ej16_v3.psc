Algoritmo tp03ej16_v3
	Leer n1,n2
	Si n1>n2 Entonces
		max1 = n1
		max2 = n2
	SiNo
		max1 = n2
		max2 = n1
	FinSi
	Para i<-2 Hasta 5 Con Paso 1 Hacer
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
