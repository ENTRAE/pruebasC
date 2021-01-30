#include<stdio.h>
#include<conio.h>

int main(){
	float a,b,c;
	printf("Introduce A: ");
	scanf("&f",&a);
	printf("Introduce B: ");
	scanf("&f",&b);
	c=a+b;
	printf("Resultado: &.2f", c);
	getch();
	
	return 0;
}
