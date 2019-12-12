#include <stdio.h>
#include <stdlib.h>

void main()
 {
int n,i,s=0,ch;
printf("Введите n ");
scanf("%d",&n);
while(n!=0) 

{

for(i=n;i>0;i=i*i)
printf(" %d %d\n",i,i*i);
scanf("%d",&ch);
s+=ch;
}
     
 }