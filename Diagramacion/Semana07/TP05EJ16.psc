Algoritmo TP05EJ16
	REC1 = 0; REC2 = 0; REC3 = 0
	TOT1 = 0; TOT2 = 0; TOT3 = 0
	Leer NROART,CV,IMP
	MAX = 0
	Mientras NROART!=0 Hacer
		Segun NROART  Hacer
			1:
				REC1 = REC1+IMP
				TOT1 = TOT1+CV
			2:
				REC2 = REC2+IMP
				TOT2 = TOT2+CV
			3:
				REC3 = REC3+IMP
				TOT3 = TOT3+CV
		FinSegun
		Leer NROART,CV,IMP
	FinMientras
	Escribir 'REC ART 1 $: ',REC1
	Escribir 'REC ART 2 $: ',REC2
	Escribir 'REC ART 3 $: ',REC3
	Si (TOT1>TOT2)&(TOT1>TOT3) Entonces
		Escribir 'ART 1 CANT: ',TOT1
	SiNo
		Si TOT2>TOT3 Entonces
			Escribir 'ART 2 CANT ',TOT2
		SiNo
			Escribir 'ART 3 CANT ',TOT3
		FinSi
	FinSi
FinAlgoritmo
