#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char ch[20];
	printf("Enter the word \n");
	scanf("%s",ch);
int	n=strlen(ch);
	int i,j;
	for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{
    if(i==0)
    printf("%c",*(ch+j));
else if(i==n-1)
    printf("%c",*(ch+n-1-j));
    else
    {if(j==0)
     printf("%c",*(ch+i));
     else if(j==n-1)
      printf("%c",*(ch+n-i-1));
else 
        printf(" ");
    }
}printf("\n");
}return 0;
}

