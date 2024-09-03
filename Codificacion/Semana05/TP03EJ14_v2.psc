Algoritmo TP03EJ14_v2
	band1er = 0; band2do = 0; bandAntUlt = 0; bandUtl = 0
	contImpar = 0
	Para i<-1 Hasta 7 Con Paso 1 Hacer
		Leer num
		Si num%2!=0 Entonces
			contImpar = contImpar+1
			Si contImpar==1 Entonces
				band1er = num
			SiNo
				Si contImpar==2 Entonces
					band2do = num
				FinSi
				bandAntUlt = bandUlt
			FinSi
			bandUlt = num
		FinSi
	FinPara
	Si contImpar==0 Entonces
		Escribir 'LISTA SIN IMPARES'
	SiNo
		Escribir 'PRIMER IMPAR: ',band1er
		Si contImpar > 2 Entonces
			Escribir 'SEGUNDO IMPAR: ',band2do
			Escribir 'ANTEULTIMO IMPAR: ',bandAntUlt
		FinSi
		Escribir 'ULTIMO IMPAR: ',bandUlt
	FinSi
FinAlgoritmo
