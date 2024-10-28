Algoritmo TP7EJ23_con_funciones
	// PTO A
	Dimension vecVendedores[15]
	// PONER EN CERO EL VECTOR
	ponerCeroVector(vecVendedores,15)
	// PTO C
	recTotal = 0
	Leer nroVendedor,importeVta
	Mientras nroVendedor!=0 Hacer
		// PROCESO CADA REGISTRO
		// PTO A
		vecVendedores[nroVendedor-1]=vecVendedores[nroVendedor-1]+importeVta
		// PTO C
		recTotal = recTotal+importeVta
		Leer nroVendedor,importeVta
	FinMientras
	// PTO A
	maxVend = buscarMaximo(vecVendedores,15)
	Escribir 'PTO A) ',maxVend+1
	mostrarVendedores(vecVendedores,15)
	// PTO C
	Escribir 'PTO C) ',recTotal
FinAlgoritmo

Funcion ponerCeroVector(v,t)
	Para i<-0 Hasta t-1 Con Paso 1 Hacer
		v[i] = 0
	FinPara
FinFuncion

Funcion ind = buscarMaximo(v,t)
	Para i<-0 Hasta t-1 Con Paso 1 Hacer
		Si i==0 Entonces
			max = v[i]
			ind = i
		SiNo
			Si v[i] > max Entonces
				max = v[i]
				ind = i
			FinSi
		FinSi
	FinPara
FinFuncion

Funcion mostrarVendedores(v,t)
	Para x<-0 Hasta t-1 Con Paso 1 Hacer
		Si v[x]==0 Entonces
			Escribir "PTO B) ", x+1
		FinSi
	FinPara
FinFuncion
