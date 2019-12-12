#include <stdio.h>
#include <conio.h>
int main(){
{
int i,j,n,m,b[i][j];
int a[3][3];
for(i=0; i<3; i++)
for(j=0; j<3; j++)
{
	printf("elementi matr [%d,%d]\n",i+1,j+1);
	scanf("%f",&a[i][j]);
}
for(i=0; i<3; i++)
for(j=0; j<3; j++)
{
if(a[i][j]>0)
printf("polozitelnie est\n\n");
a[i][j]*=(-1);
else
printf("polozitelni net\n\n");
}
for (j=0;j<3;j++)
{
if (a[i][j] < 0)
printf("%d",a[i][j]);
else
printf("%d",a[i][j]);
printf("\n");
}
}
}
