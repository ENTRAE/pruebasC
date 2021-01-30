#include<stdio.h>
#include <conio.h>

int main()
{
	int nota;
	
	printf( "\n Introduzca su nota: " );
    scanf( "%i", &nota );
    
    
    
    if(nota>=5)
    {
   	printf("\n Usted a aprovado");
   	
    }
    else
    {
    printf( "\n Usted a suspendido" );
    }
	
	if(nota>10)
	{
	printf( "nota incorrecta" );   
	}
	 
	getch();
    
    return 0;
}
