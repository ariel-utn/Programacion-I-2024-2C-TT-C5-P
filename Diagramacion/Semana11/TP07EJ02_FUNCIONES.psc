Algoritmo TP07EJ02_FUNCIONES
	// DECLARACION CONSTANTE
	TAM = 10
	// DECLARACION DEL VECTOR
	Dimension VEC[TAM]
	// LLAMO A LA FUNCION para CARGAR EL VECTOR
	CARGAR_VECTOR(VEC,TAM)
	// LLAMO A LA FUNCION para CALCULAR PROMEDIO
	PR = CALCULAR_PROMEDIO(VEC,TAM)
	// LLAMO A LA FUNCION para MOSTRAR LOS MAYORES AL PROMEDIO
	MOSTRAR_MAYOR_NUMERO(VEC,TAM,PR)
FinAlgoritmo

Funcion CARGAR_VECTOR(V,T)
	Para y<-0 Hasta T-1 Con Paso 1 Hacer
		Leer V[y]
	FinPara
FinFuncion

Funcion PROM = CALCULAR_PROMEDIO(V,T)
	ACU = 0
	CANT = 0
	Para z<-0 Hasta T-1 Con Paso 1 Hacer
		ACU = ACU+V[z]
		CANT = CANT+1
	FinPara
	PROM = ACU/CANT
FinFuncion

Funcion MOSTRAR_MAYOR_NUMERO(V,T,PROM)
	Para m<-0 Hasta T-1 Con Paso 1 Hacer
		Si V[m]>PROM Entonces
			Escribir V[m]
		FinSi
	FinPara
FinFuncion
