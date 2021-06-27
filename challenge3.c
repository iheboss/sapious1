#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
char c,tab[255];
int i=0,j,s=0;
int main()
{
printf("t\n");

printf("f\n\n");
printf("autre non\n\n\n");
scanf("%c",&c);
j=1;
do 
{
printf("het ya becha\n");
scanf("%c",&c);
i++;
if(toupper(c)=='T')
{
{
tab[i]=c;
}
else if(toupper(c)=='F')
{
tab[i]=c;
}
else j=0;
}
}while (j==1);







for(j=0;j<=i;j++)
{if(toupper(tab[i])=='T')
{
s++;
}
}
printf("la somme est  %d",s);
return 0;
}
