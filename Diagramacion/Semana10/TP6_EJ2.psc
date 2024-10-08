Algoritmo TP6_EJ2
	Leer num1,num2
	max = calcularMaximo(num1, num2)
	Escribir max
FinAlgoritmo

Funcion rtn = calcularMaximo(n1,n2)
	Si n1>n2 Entonces
		rtn = n1
	SiNo
		rtn = n2
	FinSi
FinFuncion
