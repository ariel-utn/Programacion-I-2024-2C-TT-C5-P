Algoritmo TP03EJ15_v2
	ci = 0
	Para i<-1 Hasta 4 Con Paso 1 Hacer
		Leer num
		Si i>1 Entonces
			Si num < ant Entonces
				ci = ci +1
			FinSi
		FinSi
		ant = num
	FinPara
	Si ci > 0 Entonces
		Escribir 'DESORDENADO'
	SiNo
		Escribir 'ORDENADO'
	FinSi
FinAlgoritmo
