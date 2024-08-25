Algoritmo tp2ej11_b
	contPos = 0
	acuPos = 0
	Leer n
	Si n>0 Entonces
		contPos = contPos+1
		acuPos = acuPos+n
	FinSi
	Leer n
	Si n>0 Entonces
		contPos = contPos+1
		acuPos = acuPos+n
	FinSi
	Leer n
	Si n>0 Entonces
		contPos = contPos+1
		acuPos = acuPos+n
	FinSi
	prom = acuPos/contPos
	Escribir 'Promedio: ',prom
	Si bandNeg==verdadero Entonces
		Escribir 'Hubo al menos un NEG'
	SiNo
		Escribir 'No hubo NEG'
	FinSi
FinAlgoritmo
