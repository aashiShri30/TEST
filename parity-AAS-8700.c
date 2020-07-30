#include <stdio.h>
#include<string.h>
int main(void) {
int n,k,t=1,p=0,i,d;
printf("enter the no \n");
scanf("%d",&n);
k=n^(0x00);
for(i=0;i<7;i++)
{
    d=t<<i;
    if((k&d)==d)
    p++;
}
if(p%2!=0)
n=n+0x80;

printf("%x\n",n);
return 0;
}

//AASHI SHRINATE
//138700
