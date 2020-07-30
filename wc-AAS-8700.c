#include <stdio.h>
#include<stdlib.h>
int word_count(char *line)
 {
int i,c=0; 
for(i=0;*(line+i)!='\0';i++)
{
if(*(line+i)==' '||*(line+i)=='\n'||*(line+i)=='\t')
c++;
}
printf("%d \n",(c+1));
return 0;
}
int main(void)
{
    char *line;
    line=(char *)malloc(sizeof(char)*200);
    scanf("[^\n%c]",line);
    word_count(line);
}
//AASHI SHRINATE
//138700
