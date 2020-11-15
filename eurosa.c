#include<stdio.h>

int main() {
	
	const float PUNTOSxEURO = 0.5;
	int producto, producto_max= 0;
	float precio, precio_max, total= (0,0);
	
	
	printf("Introduce el numero entero del codigo del producto: ");
	scanf("%d", &producto);
	
	while (producto > 0) {
		printf("Introduce el precio del producto:");
	    scanf ("%f", &precio);
	    total = total + precio;
	    if (precio > precio_max) {
	        precio_max = precio;
	        producto_max = producto;

	    }
	    printf("\nIntroduzca el codigo de otro producto, o 0 para acabar: ");
	    scanf("%d", &producto);
	}

	printf("\nHas gastado en total: %.2f euros", total);
	printf("\nEl producto mas caro es el que tiene el codigo: %d", producto_max);
	printf("\nY has acumulado: %.2f puntos", PUNTOSxEURO * total);

}

