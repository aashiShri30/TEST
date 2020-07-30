#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>

void print_freq(char* line)
{
char i;int j,count=0;

char ch;

for(i='a';i<'z';i++)
{count=0;
for(j=0;*(line+j)!='\0';j++)
{
 ch=tolower(*(line+j));
if(ch==i)
count++;
}
if(count>0)
printf("count of %c = %d \n ",i,count);
}
return 0;
}
int main(void) {
	// your code goes here
	return 0;
	char *cha=(char *)malloc(sizeof(char)*100);
	scanf("%s",cha);
	print_freq(cha);
	return 0;
}
//AASHI SHRINATE
//138700
