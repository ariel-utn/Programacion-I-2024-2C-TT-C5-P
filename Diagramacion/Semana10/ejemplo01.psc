Algoritmo ejemplo01
	// funcion void y con parametros
	Leer nombre
	saludar2(nombre)
	esperar tecla
	// funcion void y SIN parametros
	saludar()
	// funcion void y con parametros
	Leer num
	esPar2(num)
	// funcion con rtn y parametros
	r = esPar(num)
	Escribir r
FinAlgoritmo

Funcion rtn = esPar(n)
	Si n%2==0 Entonces
		rtn = verdadero
	SiNo
		rtn = falso
	FinSi
FinFuncion

Funcion esPar2(n)
	Si n%2 == 0 Entonces
		Escribir "PAR"
	SiNo
		Escribir "IMPAR"
	FinSi
FinFuncion

Funcion saludar()
	Escribir "HOLA"
FinFuncion

Funcion saludar2(n)
	Escribir "Hola ", n
FinFuncion
