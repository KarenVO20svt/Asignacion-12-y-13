Proceso Tema_B_Ejercicio_1
	Definir a�os, sueldo como real
	Escribir "Ingrese la antig�edad del trabajador en a�os: "
	Leer a�os
	Escribir "Ingrese el sueldo del trabajador en soles: "
	Leer sueldo
	Si a�os > 0 y a�os <= 3 entonces 
		bono = sueldo*0.04
		Escribir "El bono ser�a: " bono
	Sino
		Si a�os > 3 y a�os <= 5 entonces
			bono = sueldo*0.06
			Escribir "El bono ser�a: " bono
		Sino
			Si a�os > 5 y a�os <= 10 entonces
				bono = sueldo*0.10
				Escribir "El bono ser�a: " bono
			Sino
				Si a�os > 10 entonces
					bono = sueldo*0.15
					Escribir "El bono ser�a: " bono
				FinSi
			FinSi
		FinSi
		
	FinSi
FinProceso
