#include<stdio.h>

float areaCuadrado(int lado){
	return lado*lado;
	
}

int main(){
	int lado1, lado2;
	printf("introduzca los lados de los cuadrados: ");
	scanf("%d %d", &lado1, %lado2);
	
	float area1 = areaCuadrado(lado1);
	float area2 = areaCuadrado(lado2);
	
	printf("El Area entre ambos cuadrados es: %f",(area1>area2 ? area1-area2 : area2-area1));
	
	return 0;
}
