Algoritmo tp2ej05
	Leer imp
	Si (imp>=100)&&(imp<=500) Entonces
		impFinal = imp*0.9
	FinSi
	Si imp>500 Entonces
		impFinal = imp*0.85
	FinSi
	Si imp<100 Entonces
		impFinal = imp*0.95
	FinSi
	Escribir impFinal
FinAlgoritmo
