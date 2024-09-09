Algoritmo TP03EJ20
	Leer num
	cd = 0
	Para i<-1 Hasta num Con Paso 1 Hacer
		Si num%i==0 Entonces
			cd = cd+1
		FinSi
	FinPara
	Si cd==2 Entonces
		Escribir "PRIMO"
	SiNo
		Escribir "NO PRIMO"
	FinSi
FinAlgoritmo
