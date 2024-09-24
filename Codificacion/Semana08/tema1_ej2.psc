Algoritmo tema1_ej2
	// PTO D
	ACUREC = 0
	// PTO B
	BANDREC = 0
	Escribir "SUC, DIA, IMP, ENV, MP"
	Leer suc, dia,imp,env,mp
	Mientras suc != 0 Hacer
		ant = suc
		// PTO A
		MAX1 = 0; MAX2 = 0
		// PTO B
		RECTOTAL = 0
		// PTO C
		EFECT = 0;  DEB = 0; CRED = 0;
		Mientras suc == ant Hacer
			// proceso TODOS LOS REGISTROS
			// PTO A
			Si IMP > MAX1 Entonces
				MAX2 = MAX1
				MAX1 = IMP
				MAX2DIA = MAX1DIA
				MAX1DIA = DIA
			SiNo
				Si IMP > MAX2 Entonces
					MAX2 = IMP
					MAX2DIA = DIA
				FinSi
			FinSi
			// PTO B
			RECTOTAL = RECTOTAL + IMP
			Escribir "SUC, DIA, IMP, ENV, MP"
			// PTO C
			Segun MP Hacer
				1:
					EFECT = EFECT + IMP
				2:
					DEB = DEB+ IMP
				3:
					CRED = CRED + IMP
			FinSegun
			// PTO D
			Si (ENV == 1) && (DIA < 16) Entonces
				ACUREC = ACUREC +IMP
			FinSi
			Leer suc, dia,imp,env,mp
		FinMientras
		// PTO A
		Escribir "MAX1: ", MAX1, " DIA: ", MAX1DIA
		Escribir "MAX2: ", MAX2, " DIA: ", MAX2DIA
		// PTO B
		Si BANDREC == 0 Entonces
			MINREC = RECTOTAL
			MINSUC = ANT
			BANDREC = 1
		SiNo
			Si RECTOTAL < MINREC Entonces
				MINREC = RECTOTAL
				MINSUC = ANT
			FinSi
		FinSi
		// PTO C
		Escribir "SUC ", ANT, " $: "
		TOTAL = EFECT + DEB + CRED
		PORCEFECT = EFECT*100/TOTAL
		PORCDEB = DEB*100/TOTAL
		PORCRED = CRED*100/TOTAL
		Escribir "EFECT: ", PORCEFECT, "%"
		Escribir "DEBITO: ", PORCDEB, "%"
		Escribir "CRED: ", PORCRED, "%"
	FinMientras
	Escribir "SUC REC MINIMA: ", MINSUC
	// PTO D
	Escribir "RECAUDACION TOTAL CON ENVIO EN 2DA QUINCENA: ", ACUREC
FinAlgoritmo
