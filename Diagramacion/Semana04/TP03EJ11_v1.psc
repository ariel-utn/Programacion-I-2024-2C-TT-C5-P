Algoritmo TP03EJ11_v1
	Leer n1, n2
	Si n1>n2 Entonces
		max = n1
		min = n2
	SiNo
		max = n2
		min = n1
	FinSi
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Leer n
		Si n>max Entonces
			max = n
		FinSi
		Si n<min Entonces
			min = n
		FinSi
	FinPara
	Escribir "MAX: ", max
	Escribir "MIN:",min
FinAlgoritmo
