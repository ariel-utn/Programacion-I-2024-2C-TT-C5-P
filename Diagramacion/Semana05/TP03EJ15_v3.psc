Algoritmo TP03EJ15_v3
	cc = 0
	Para i<-1 Hasta 4 Con Paso 1 Hacer
		Leer num
		Si i>1 Entonces
			Si num>=ant Entonces
				cc = cc+1
			FinSi
		FinSi
		ant = num
	FinPara
	Si cc==3 Entonces
		Escribir 'ORDENADO'
	SiNo
		Escribir 'DESORDENADO'
	FinSi
FinAlgoritmo
