/* Programa: Numeros pares o impares (Versi�n 2 - Cinco n�meros) */

#include <conio.h>
#include <stdio.h>

int main()
{
    int i, numero, pares, impares;

    pares = 0;
    impares = 0;

    for ( i = 1 ; i <= 5 ; i++ )
    {
        printf( "\n   Introduzca un numero entero: ", i );
        scanf( "%d", &numero );

        if ( numero % 2 == 0 )
            pares++;
        else
            impares++;
    }

    printf( "\n   Ha introducido %d numeros pares y %d impares: ", pares, impares );

    getch(); 

    return 0;
}
