Algoritmo MODELO_PARCIAL_3
	// LOTE DE CARGA
	// PTO D
	DIMENSION VCA[20]
	Para i<-0 Hasta 19 Con Paso 0 Hacer
		VCA[i] = 0
	FinPara
	Dimension VCAT[100]
	Dimension VPU[100]
	Para i<-1 Hasta 100 Con Paso 1 Hacer
		Leer ART,CAT,PU
		VCAT[ART-1]=CAT
		VPU[ART-1]=PU
		// PTO D
		VCA[CAT-1] = VCA[CAT-1] + 1
	FinPara
	// LOTE DE VENTAS
	Dimension VMES[12]
	Para i<-0 Hasta 11 Con Paso 1 Hacer
		VMES[i] = 0
	FinPara
	DIMENSION VBIM[6]
	Para i<-0 Hasta 6 Con Paso 1 Hacer
		VBIM[i] = 0
	FinPara
	DIMENSION VVEND[50]
	Para i<-0 Hasta 49 Con Paso 1 Hacer
		VVEND[i] = 0
	FinPara
	Leer MES,VEND,ART,CV
	Mientras MES!=0 Hacer
		// PTO A)
		PU = VPU[ART-1]
		REC = PU*CV
		VMES[MES-1]=VMES[MES-1]+REC
		// DEVUELVE VALORES DEL 1 AL 6
		B = OBTENER_BIMESTRE(MES)
		// PTO B)
		// PROCESO VENTAS
		VBIM[B-1] = 1
		// PTO C
		VVEND[VEND-1] = 1
		Leer MES,VEND,ART,CV
	FinMientras
	Para x<-0 Hasta 11 Con Paso 1 Hacer
		Escribir 'Mes: ',x+1,'Recaudacion total: ',VMES[x]
	FinPara
	Para x<-0 Hasta 5 Con Paso 1 Hacer
		Si VBIM[x]==0 Entonces
			Escribir "El bimestre ", x + 1, " no tuvo ventas"
		FinSi
	FinPara
	Para x<-0 Hasta 49 Con Paso 1 Hacer
		Si VVEND[x]==0 Entonces
			Escribir "El vendednor ", x + 1, " no tuvo ventas"
		FinSi
	FinPara
	M =  BUSCAR_MAXIMO(VCA,20)
	Escribir "La categoría.... es: " M
FinAlgoritmo

Funcion B = OBTENER_BIMESTRE(M)
	B = (M+M%2)/2
FinFuncion

Funcion R = BUSCAR_MAXIMO(V,T)
	Para i<-0 Hasta T-1 Con Paso 1 Hacer
		Si i==0 Entonces
			max = V[i]
			ind = i
		SiNo
			Si V[i] > max Entonces
				max = V[i]
				ind = i
			FinSi
		FinSi
	FinPara
	R = ind + 1 
FinFuncion
