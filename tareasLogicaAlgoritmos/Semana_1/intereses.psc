Proceso banco
	// declaraci�n de variables
	// entradas
	Definir montoInicial, interesAnual, plazo, totalaPagar Como Real;
	// Proceso 
	Escribir 'Ingrese el monto inicial del pr�stamo:';
	Leer montoInicial;
	interesAnual <- 0.03;
	plazo <- 5;
	totalaPagar <- ((montoInicial*interesAnual)*plazo)+montoInicial;
	Escribir 'El total a pagar al cabo de ', plazo, ' a�os es: ', totalaPagar;
FinProceso
