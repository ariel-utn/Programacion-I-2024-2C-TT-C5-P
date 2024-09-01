Algoritmo TP3_EJ13_bandera
	band = falso
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer num
		Si num%2==0 Entonces
			Si band == falso Entonces
				band = verdadero
				maxPar = num
			SiNo
				Si num>maxPar Entonces
					maxPar = num
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir 'MAXIMO PAR ',maxPar
FinAlgoritmo
