#include<stdio.h>

int main() {
	
	const float PUNTOSxEURO = 0.5;
	int producto, producto_max= 0;
	float precio, precio_max, total, total_perfumeria, puntos_acumulados= (0,0);
	
	
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
	    if (producto > 349 & producto < 401) {
	        total_perfumeria = total_perfumeria + precio;
	    }else
		{
			puntos_acumulados = PUNTOSxEURO * total;
		}
	    printf("\nIntroduzca el codigo de otro producto, o 0 para acabar: ");
	    scanf("%d", &producto);
	}

	printf("\nHas gastado en total: %.2f euros", total);
	if (total_perfumeria > 0){
			printf("\nDe los cuales %.2f han sido en productos de perfumeria", total_perfumeria);	    
			}
	printf("\nEl producto mas caro es el que tiene el codigo: %d", producto_max);
	printf("\nY has acumulado: %.2f puntos", puntos_acumulados);

}


