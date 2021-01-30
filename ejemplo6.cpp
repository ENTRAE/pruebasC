#include<stdio.h>
#include<stdlib.h>

int main()
{
	int lado, area, area2, lado2, distancia;
	
	printf("\n Escribe el lado del primer cuadrado: ");
	scanf("%d",&lado);
	area = lado*lado;
	
	
    printf("Escribe el lado del segundo cuadrado: ");
	scanf("%d",&lado2);
	area2 = lado2*lado2;
	distancia = lado-lado2;
	
	printf(" El valor del area del primer cuadrado es: %d \n", area);
	
	printf(" El valor del area del segundo cuadrado es: %d \n", area2);
	
	
	printf(" Y la distancia entre cada cuadrado es: %i \n", distancia);
	
	system("pause");
	return 0;
}

