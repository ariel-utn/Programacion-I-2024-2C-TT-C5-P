Algoritmo TP03EJ14_v1
	contImpar = 0
	Para i<-1 Hasta 7 Con Paso 1 Hacer
		Leer num
		Si num%2!=0 Entonces
			contImpar = contImpar+1
			Si contImpar==1 Entonces
				primerImpar = num
			SiNo
				Si contImpar==2 Entonces
					segundoImpar = num
				FinSi
				antUltImpar = ultImpar
			FinSi
			ultImpar = num
		FinSi
	FinPara
	Si contImpar==0 Entonces
		Escribir 'No hubo impares'
	SiNo
		Escribir 'EL PRIMER IMPAR: ',primerImpar
		Si contImpar>2 Entonces
			Escribir 'EL SEGUNDO IMPAR: ',segundoImpar
			Escribir 'EL ANTEULTIMO IMPAR: ',antUltImpar
		FinSi
		Escribir 'EL ULTIMO IMPAR: ',ultImpar
	FinSi
FinAlgoritmo
