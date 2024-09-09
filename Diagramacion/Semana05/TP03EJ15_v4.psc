Algoritmo TP03EJ15_v4
	band = 1
	Leer ant
	Para i<-2 Hasta 4 Con Paso 1 Hacer
		Leer num
		Si num < ant Entonces
			band = 0
		FinSi
		ant = num
	FinPara
	Si band==1 Entonces
		Escribir 'ORDENADO'
	SiNo
		Escribir 'DESORDENADO'
	FinSi
FinAlgoritmo
