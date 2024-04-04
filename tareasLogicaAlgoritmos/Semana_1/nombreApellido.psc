Proceso primeraActividad
	// Declaración de variables
	// Entradas
	Definir nombre Como Cadena;
	Definir apellido Como Cadena;
	Definir edadAnos Como Entero;
	Definir pesoLibras Como Real;
	Definir edadDias Como Entero;
	Definir pesoKilos Como Real;
	// Proceso
	Escribir 'Inserte su nombre';
	Leer nombre;
	Escribir 'Inserte su apellido';
	Leer apellido;
	Escribir 'Inserte su edad en años';
	Leer edadAnos;
	Escribir 'Inserte su peso en libras';
	Leer pesoLibras;
	edadDias <- edadAnos*365;
	pesoKilos <- pesoLibras*0.453592;
	// Salidas
	Escribir 'Su usuario será: ', apellido, ' ', nombre;
	Escribir 'Su edad en días es: ', edadDias;
	Escribir 'Su peso en kilos es: ', pesoKilos;
FinProceso
