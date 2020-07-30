#include<stdio.h>
#define M 0x8000
#define LSB(x) ((x<<15)&M)>>15
int main(void) 
{ 
     int n;
     scanf("%d",&n);
    printf("%d", LSB(n)); 
    return 0; 
} 
//AASHI SHRINATE
//138700
