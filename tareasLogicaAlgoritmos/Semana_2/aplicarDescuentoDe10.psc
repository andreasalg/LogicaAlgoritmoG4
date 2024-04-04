Proceso aplicarDescuentoDe10
	// declaración de variables 
	// entrada
	Definir cantidadproductos, preciounitario, preciototal, descuento, preciocondescuento Como Real;
	// Proceso 
	Escribir 'Ingrese la cantidad de productos:';
	Leer cantidadproductos;
	Escribir 'Ingrese el precio unitario del producto:';
	Leer preciounitario;
	preciototal <- cantidadproductos*preciounitario;
	descuento <- preciototal*0.10;
	preciocondescuento <- preciototal-descuento;
	Escribir 'El precio total sin descuento es: ', preciototal;
	Escribir 'El descuento aplicado es: ', descuento;
	Escribir 'El precio con descuento del 10% es: ', preciocondescuento;
FinProceso
