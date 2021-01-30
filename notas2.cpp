#include <conio.h>
#include <stdio.h>

int main()
{
    float nota;

    printf( "\n   Introduzca nota (real): " );
    scanf( "%f", &nota );

    
    while ( nota < 0 || nota > 10 )
    {
        printf( "\n   ERROR: Nota incorrecta, debe ser >= 0 y <= 10\n" );
        printf( "\n   Introduzca nota (real): " );
        scanf( "%f", &nota );
    }

    
    if ( nota >= 5 )
        printf( "\n   APROBADO" );
    else
        printf( "\n   SUSPENDIDO" );

    getch(); /* Pausa */

    return 0;
}
