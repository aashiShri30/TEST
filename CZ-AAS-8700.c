#include <stdio.h>

int main(void) {
	// your code goes here
	
	int c=0x4C,t=1,count=0,d=1;
	int k=c^(0xFF);
	for(int i=1;i<=8;i++)
	{
	   int B=k&d;
	  // printf("%d \n",d);
	   if(B==d)
	   {
	       
	       count++;}
	  d= t<<i;
	}
	
	printf("%d",count);
	
	return 0;
}
//AASHI SHRINATE
//138700
