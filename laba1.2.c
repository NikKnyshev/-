#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float x,z,y,s,k,c,i,m,r,l,j;
    printf ("VVedite x:"); //ввод данных с клавиатуры
    scanf("%f",&x);
    printf ("VVedite y:");
    scanf("%f",&y);
    printf ("VVedite z:");
    scanf("%f",&z); 
    
    
    k=pow(z,2.); //рассчет переменных
    c=x-2./3.;
    j=cos(c);
    i=sin(y);
    l=pow(i,2.);
    m=3.-k/5.;
    r=(k/m);
    
    s=(2.*j)/(1./2.+l)*1.+r; //рассчет фомулы
    
    printf ("s=%f",s); //вывод результата
     
}
