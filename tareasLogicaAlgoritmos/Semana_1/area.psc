Algoritmo suma
	//declaración de variables 
	//entradas
	Definir areaX Como real;
	Definir areaY Como real;
	Definir area Como real;
	Definir ladrillos como entero;
	Definir totalLadrillos como real;
	
	//Proceso 
	Escribir "Dime cuanto mide el area X: ";
	Leer areaX; 
	Escribir "Dime cuanto mide el area Y: ";
	Leer areaY;
	
	ladrillos<-20;
	area <- areaX * areaY;
	totalLadrillos <- area * ladrillos;
	Escribir "Cantidad de ladrillos que se necesitan para cubrir el area:  ", totalLadrillos; 
FinAlgoritmo
