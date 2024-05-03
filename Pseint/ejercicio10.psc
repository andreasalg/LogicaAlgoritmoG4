Proceso ejercicio10
	
	definir fila, columna, matriz, transpuesta como entero;
    dimensionar matriz[2,3], transpuesta[3,2];
	
    para fila<-0 Hasta 1 con paso +1 Hacer;
        para columna<-0 hasta 2 con paso +1 Hacer;
            escribir "ingresar numero en la fila ", fila+1, ", columna ", columna+1, ":"; 
            leer matriz[fila, columna];
        Fin Para;
    Fin Para;
	
    para fila<-0 Hasta 1 Hacer;
        para columna<-0 Hasta 2 Hacer;
            transpuesta[columna, fila] <- matriz[fila, columna];
        Fin Para;
    Fin Para;
	
    Escribir "matriz ingresada:"; 
	
    para fila<-0 Hasta 1 Hacer;
        para columna<-0 Hasta 2 Hacer;
			Escribir matriz[fila, columna];
        Fin Para;
    Fin Para;
	
    Escribir "La transposicion de la matriz es igual a:  "; 
	
    para fila<-0 Hasta 2 Hacer;
        para columna<-0 Hasta 1 Hacer;
			Escribir transpuesta[fila, columna];
        Fin Para;
    Fin Para;
	
	
FinProceso
