Algoritmo tp2ej11_con_ciclo
	contPos = 0; contNeg = 0; contCero = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer n
		Si n==0 Entonces
			contCero = contCero+1
		SiNo
			Si n<0 Entonces
				contNeg = contNeg+1
			SiNo
				contPos = contPos+1
			FinSi
		FinSi
	FinPara
	Escribir 'Cantidad POS: ',contPos
	Escribir 'Cantidad NEG: ',contNeg
	Escribir 'Cantidad CERO: ',contCero
FinAlgoritmo
