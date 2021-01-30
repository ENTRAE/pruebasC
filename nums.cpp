#include<stdio.h>

int main()
{
	int num[3], a, i=0;
	
	for( a=0; a<3; a++ )
	{
		printf("\n Pon tu numero: ");
		scanf("%d", &num[a]);
	}
	
	while(num[a]!=0 && num[a]!=1)
	{
		printf("\n El numero ha de ser 1 o 0");
		printf("\n Vuelve a introducir el numero %d: ", a+1);
		scanf("%d", &num[a]);
	}
	
	return 0;
}
