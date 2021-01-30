// https://www.onlinegdb.com/
#include <stdio.h>
#include <stdlib.h>

int main ()
{

  int a = 12;
  int b = 4;
  int c = 500;

  if (a>b)
    {
      printf (" A es mayor que B es: %i \n",a);

    }
    else
    {
      printf (" A No es mayor que B \n ");
    }

  if (a+b>=c)
    {
      printf (" a+b es mayor que C: \n ");
    }
	else{
    	printf (" a+b no es mayor que C es: %i \n ",a+b);
    	printf ("\n c es: %i",c);
	} 

system("pause");
  return 0;

}
