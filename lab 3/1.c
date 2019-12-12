#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
    
    int a,i;
    
    for(i=10;i<=99;i++)
	{
    
    
    if((i/10 + i%10)==11){
    
    a=(i%10)*10+i/10;
    printf("%d----%d-----%d\n",i,i+27,a);    
    }
    }
    
    return 0;
}
