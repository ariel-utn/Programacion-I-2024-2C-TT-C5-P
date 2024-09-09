Algoritmo tp03ej16_v1
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer num
		Si i==1 Entonces
			max1 = num
			max2 = num
		SiNo
			Si num>max1 Entonces
				max2 = max1
				max1 = num
			SiNo
				Si (num>max2)||(i==2) Entonces
					max2 = num
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir 'MAX1: ',max1
	Escribir 'MAX2: ',max2
FinAlgoritmo
