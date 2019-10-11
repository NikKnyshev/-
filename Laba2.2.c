#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  int R,a,d;
  
 printf("Vvedite R\n");
 scanf("%d",&R);
 printf("Vvedite a\n");
 scanf("%d",&a);

 d=sqrt(a*a);

 if (R<=a/2) 
 printf("Krug v kvadrate");
 else if (R>=d/2) 
 printf("Kvadrat v kruge");

}
