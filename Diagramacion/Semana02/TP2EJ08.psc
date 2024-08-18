Algoritmo TP2EJ08
	Leer L1,L2,L3
	Si (L1==L2) && (L1==L3) Entonces
		Escribir "EQ"
	SiNo
		Si (L1!=L2)&&(L2!=L3)&&(L1!=L3) Entonces
			Escribir "ES"
		SiNo
			Escribir "IS"
		FinSi
	FinSi
FinAlgoritmo
