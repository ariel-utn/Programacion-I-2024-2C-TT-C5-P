Algoritmo TEMA06_EJ01_B
	// GRUPO: SUCURSAL
	Leer NS,DIA,IMP,VEND,TD,MP
	Mientras NS<>0 Hacer
		REC1 = 0; REC2 = 0; REC3 = 0
		ANT = NS
		Mientras NS==ANT Hacer
			// PROCESO LOS REGISTROS DE VTAS
			Si MP ==1  Entonces
				REC1 = REC1+IMP
			SiNo
				Si MP == 2 Entonces
					REC2 = REC2+IMP
				SiNo
					REC3 = REC3+IMP
				FinSi
			FinSi
			Leer NS,DIA,IMP,VEND,TD,MP
		FinMientras
		T = REC1 + REC2 + REC3
		PORC1 = REC1*100/T
		PORC2 = REC2*100/T
		PORC3 = REC3*100/T
		Escribir 'LA SUC ',ANT,' RECAUDO EN EFEC $: ', PORC1
		Escribir 'LA SUC ',ANT,' RECAUDO EN DEB $: ', PORC2
		Escribir 'LA SUC ',ANT,' RECAUDO EN CRED $: ', PORC3
	FinMientras
FinAlgoritmo
