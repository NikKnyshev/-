#include <stdio.h>

#include <stdlib.h>

#include <math.h>



void main()

{

    float x,z,y,s,k,c,i,m,r,l,j;

    printf ("VVedite x:"); //ââîä äàííûõ ñ êëàâèàòóðû

    scanf("%f",&x);

    printf ("VVedite y:");

    scanf("%f",&y);

    printf ("VVedite z:");

    scanf("%f",&z); 

    

    

    k=pow(z,2.); //ðàññ÷åò ïåðåìåííûõ

    c=x-2./3.;

    j=cos(c);

    i=sin(y);

    l=pow(i,2.);

    m=3.-k/5.;

    r=(k/m);

    

    s=(2.*j)/(1./2.+l)*1.+r; //ðàññ÷åò ôîìóëû

    

    printf ("s=%f",s); //âûâîä ðåçóëüòàòà

     }