#include<stdio.h>

#define negate(x) x>0?(-x):x;
int main(void) 
{ 
     
    int n;
     scanf("%d",&n);
    printf("%d", abs(n)); 
    return 0; 
} 
