Proceso convertirDolaresACordobas
	// declaración de variables 
	// entrada
	Definir dolares, tasacambio, cordobas Como Real;
	// Proceso 
	Escribir 'Ingrese la cantidad de dólares a convertir:';
	Leer dolares;
	tasacambio <- 36.8;
	cordobas <- dolares*tasacambio;
	Escribir 'La cantidad de ', dolares, ' dólares equivale a ', cordobas, ' córdobas.';
FinProceso
