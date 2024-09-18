Algoritmo tp5ej04
	contpositivos = 0
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		contpos = 0; contneg = 0
		bandpar = 0
		bandimpar = 0
		Leer n
		Mientras n!=0 Hacer
			Si n%2==0 Entonces
				Si bandpar==0 Entonces
					maxpar = n
					bandpar = 1
				SiNo
					Si n>maxpar Entonces
						maxpar = n
					FinSi
				FinSi
			SiNo
				Si bandimpar==0 Entonces
					maximpar = n
					bandimpar = 1
				SiNo
					Si n>maximpar Entonces
						maximpar = n
					FinSi
				FinSi
			FinSi
			Si n > 0 Entonces
				contpos = contpos + 1
			SiNo
				contneg = contneg +1 
			FinSi
			Si n > 0 Entonces
				contpositivos = contpositivos + 1
			FinSi
			Leer n
		FinMientras
		Escribir "MAX PAR: ", maxpar
		Escribir "MAX IMPAR: ", maximpar
		total = contpos + contneg
		porcpos = (contpos*100)/total
		porcneg = (contneg*100)/total
		Escribir "PORC NEG: ", porcneg
		Escribir "PORC POS: ", porcpos
	FinPara
	Escribir "TOTAL DE NROS POSITIVOS: ", contpositivos
FinAlgoritmo
