Algoritmo TP2EJ24_v2
	Leer m
	Si m<4 Entonces
		t = 1
	SiNo
		Si m<7 Entonces
			t = 2
		SiNo
			Si m<10 Entonces
				t = 3
			SiNo
				t = 4
			FinSi
		FinSi
	FinSi
	Escribir 'El mes ',m,' es del trimestre ',t
FinAlgoritmo
