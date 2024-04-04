Proceso calcularPromedioEstudiante
	// declaración de variables 
	// entrada
	Definir nota1, nota2, nota3, nota4, nota5, promedio Como Real;
	// Proceso 
	Escribir 'Ingrese la nota de la primera asignatura:';
	Leer nota1;
	Escribir 'Ingrese la nota de la segunda asignatura:';
	Leer nota2;
	Escribir 'Ingrese la nota de la tercera asignatura:';
	Leer nota3;
	Escribir 'Ingrese la nota de la cuarta asignatura:';
	Leer nota4;
	Escribir 'Ingrese la nota de la quinta asignatura:';
	Leer nota5;
	promedio <- (nota1+nota2+nota3+nota4+nota5)/5;
	Escribir 'El promedio del estudiante es: ', promedio;
FinProceso
