#include <stdio.h>
#include <stdlib.h>

int main(){
int a[10]={0,0,0,0,1,1,1,0,0,0};
int i,n=0,maxid,minid;
for(i=0;i<10;i++) {
	if (a[i]==1){

		n++;
		printf("%d\n", a[i]);
	}
	
	}	
	printf("%d",n);
}
