Proceso ejercicio1
	
Definir n, suma, i como Entero;
Escribir "Hasta qu� numero desea sumar?";
Leer n;
		
Si n < 1 Entonces
		Escribir "El n�mero ingresado no es valido";
Sino
		suma <- 0;
		Para i <- 1 Hasta n Con Paso 1 Hacer
		suma <- suma + i;
		FinPara
		Escribir "La suma de los n�meros de 1 hasta ", n, " es ", suma;
	FinSi
	
FinProceso
