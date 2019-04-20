Proceso Tema_B_Ejercicio_1
	Definir años, sueldo como real
	Escribir "Ingrese la antigüedad del trabajador en años: "
	Leer años
	Escribir "Ingrese el sueldo del trabajador en soles: "
	Leer sueldo
	Si años > 0 y años <= 3 entonces 
		bono = sueldo*0.04
		Escribir "El bono sería: " bono
	Sino
		Si años > 3 y años <= 5 entonces
			bono = sueldo*0.06
			Escribir "El bono sería: " bono
		Sino
			Si años > 5 y años <= 10 entonces
				bono = sueldo*0.10
				Escribir "El bono sería: " bono
			Sino
				Si años > 10 entonces
					bono = sueldo*0.15
					Escribir "El bono sería: " bono
				FinSi
			FinSi
		FinSi
		
	FinSi
FinProceso
