Proceso ejercicio8
	
	definir i, vector1, vector2, producto como entero;
	dimensionar vector1[2], vector2[2];
	producto <- 0;
	
	para i<-0 hasta 1 con paso +1 Hacer
		escribir "ingresar numero ", i+1, " a vector 1:";
		leer vector1[i];
		escribir "ingresar numero ", i+1, " a vector 2:";
		leer vector2[i];
	FinPara
	
	para i<-0 hasta 1 con paso +1 Hacer
		producto <- producto + (vector1[i] * vector2[i]);
	FinPara
	
	escribir "El producto punto de los vectores es: ", producto;
	
FinProceso
