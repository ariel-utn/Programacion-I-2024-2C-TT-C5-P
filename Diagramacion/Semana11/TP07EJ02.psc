Algoritmo TP07EJ02
	// DECLARACION
	Dimension vec[10]
	// INGRESAR VALORES EN EL VECTOR
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vec[i]
	FinPara
	// SUMAR EL CONTENIDO DEL VECTOR
	ACU = 0
	CANT = 0
	Para j<-0 Hasta 9 Con Paso 1 Hacer
		ACU = ACU+VEC[j]
		CANT = CANT +1
	FinPara
	// CALCULO PROMEDIO
	PROM = ACU/CANT
	// BUSCO LOS MAYORES AL PROMEDIO
	Para k<-0 Hasta 9 Con Paso 1 Hacer
		Si VEC[k] > PROM Entonces
			Escribir VEC[k]
		FinSi
	FinPara
FinAlgoritmo
