Algoritmo TP07EJ01
	// DECLARACION
	DIMENSION VEC[10]
	// INGRESAR VALORES EN EL VECTOR
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vec[i]
	FinPara
	// SUMAR EL CONTENIDO DEL VECTOR
	ACU = 0
	Para j<-0 Hasta 9 Con Paso 1 Hacer
		ACU = ACU + vec[j]
	FinPara
	Escribir "Suma: ", ACU
FinAlgoritmo
