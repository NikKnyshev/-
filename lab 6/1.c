#include <stdio.h> 
#include <malloc.h> 

int ans,n, i, mn = 1e8, l= -1, r; 
int *a; 

int main() { 
printf("kolvo elementov\n"); 
scanf("%d",&n); 
a = (int*)malloc(n*sizeof(int)); 

printf("elementi mas\n"); 
for(i=0; i < n; i++){ 

scanf("%d", &a[i]); 
if(mn > a[i]){ 
mn = a[i]; 
} 
if(a[i] > 0 && l == -1){ 
l = i; 
} 
if(a[i] > 0){ 
r = i; 
} 
} 
printf("min = %d\n",mn); 
for(i=l; i <= r; i ++){ 
ans+=a[i]; 

} 
printf("sum = %d", ans); 
return 0; 
}