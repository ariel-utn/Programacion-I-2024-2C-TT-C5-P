Algoritmo TP03EJ20
	Para j<-1 Hasta 10 Con Paso 1 Hacer
		Leer n
		cd = 0
		Para i<-1 Hasta n Con Paso 1 Hacer
			Si (n%i==0) Entonces
				cd = cd+1
			FinSi
		FinPara
		Si cd==2 Entonces
			Escribir "PRIMO"
		SiNo
			Escribir "NO PRIMO"
		FinSi
	FinPara
FinAlgoritmo
