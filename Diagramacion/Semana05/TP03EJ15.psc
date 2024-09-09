Algoritmo TP03EJ15
	band = 1
	Para i<-1 Hasta 4 Con Paso 1 Hacer
		Leer num
		Si i>1 Entonces
			Si num < ant Entonces
				band = 0
			FinSi
		FinSi
		ant = num
	FinPara
	Si band==1 Entonces
		Escribir "ORDENADO"
	SiNo
		Escribir "DESORDENADO"
	FinSi
FinAlgoritmo
