Proceso convertirCordobasADolares
	// declaración de variables 
	// entrada
	Definir cordobas, tasacambio, dolares Como Real;
	// Proceso 
	Escribir 'Ingrese la cantidad de córdobas a convertir:';
	Leer cordobas;
	tasacambio <- 0.027;
	dolares <- cordobas*tasacambio;
	Escribir 'La cantidad de ', cordobas, ' córdobas equivale a ', dolares, ' dólares.';
FinProceso
