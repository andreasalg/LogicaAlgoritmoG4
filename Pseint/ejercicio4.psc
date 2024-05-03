Proceso ejercicio4
	
	Definir nota, sumaNotas Como Real;
    Definir promedio Como Real;
    Definir contador Como Entero;
	
    sumaNotas <- 0;
	
    Para contador <- 1 Hasta 10 Con Paso 1 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer nota;
        sumaNotas <- sumaNotas + nota;
    FinPara
	
    promedio <- sumaNotas / 10;
	
    Escribir "El promedio general de la sección es:", promedio;
	
FinProceso
