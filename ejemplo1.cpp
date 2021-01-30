#include <stdio.h>
#include <math.h>
#define VALOR 5.7
double modulo3D( double x, double y, double z );
double mod3; /* Variable global */
double modulo3D( double x, double y, double z ){
return(sqrt(x*x+y*y+z*z);
}
int main( void ){
int x, y, z;
x=y=z=VALOR;
mod3=modulo3D(x,y,z);
printf("\n El módulo es: %1f",mod3);
return(0);
}
