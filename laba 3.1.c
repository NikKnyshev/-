#include <stdio.h>

 
int main(int argc, char *argv[]) 
{ 
    int i,j,k,m,n;

     m=10;
     n=99;
     k=27;
    
    for(i = m, j = m + k; i < n; ++i, ++j)
        if(i / 10 % 10 + i % 10 == 11 && i / 10 % 10 == j % 10 && i % 10 == j / 10 % 10)
            printf("\n%d => %d", i, j);
            
     
    return 0;
}
