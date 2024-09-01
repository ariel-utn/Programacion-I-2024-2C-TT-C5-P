Algoritmo TP3_EJ13_cuenta_pares
	contPares = 0
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer num
		Si num%2 == 0 Entonces
			contPares = contPares + 1
			Si contPares == 1 Entonces
				maxPar = num
			SiNo
				Si num > maxPar Entonces
					maxPar = num
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir 'MAXIMO PAR ',maxPar
FinAlgoritmo
