#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
int x,y,i,j,k,b[3][3],c[j], s=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++){
	printf("Vvedite elem matr [%d,%d]\n",i+1,j+1);
	scanf("%d",&b[i][j]);
}
for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	if(b[i][j]<0)
	s+=b[i][j];
}
printf("Sum = %d\n",s);
return 0;
}


