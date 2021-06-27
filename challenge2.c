#include <stdio.h>


    int n,l,i,j;
   int main() {
   
    do
{
    printf("enter the num");
    scanf("%d",&n);
}
    while(n<=0);
       do
{
    printf("enter the length");
    scanf("%d",&l);
}
    while(l<=0);

printf(" %d ",n);
for(i=2;i<=l;i++)
{

  j=n*i;
printf(" --> %d ",j);
 


}



    return 0;
}
