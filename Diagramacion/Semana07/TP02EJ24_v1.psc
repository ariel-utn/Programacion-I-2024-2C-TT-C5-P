Algoritmo TP2EJ24_v1
	Leer m
	r = m%3
	Si r==1 Entonces
		m = m+2
	SiNo
		Si r==2 Entonces
			m = m+1
		FinSi
	FinSi
	t = m/3
	Escribir 'Trimestre ',t
FinAlgoritmo
