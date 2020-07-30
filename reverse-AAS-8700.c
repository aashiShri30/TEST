#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	
	char c[20]="Aashiy";
	char *t;
	int n= strlen(c);
	int i;
//	printf("%d",n);
	for(i=0;i<n/2;i++)
	{
	    *t=*(c+i);
	    *(c+i)=*(c+n-i-1);
	    *(c+n-1-i)=*t;
	    
	}
	printf("%s",c);
	return 0;
}
//AASHI SHRINATE
//138700
