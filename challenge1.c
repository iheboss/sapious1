#include <stdio.h>

int main() {
    float h,b,a;
    do
{
    printf("enter the height ");
    scanf("%f",&h);
}
    while(h<=0);
       do
{
    printf("enter the base");
    scanf("%f",&b);
}
    while(b<=0);
 a=(h*b)/2;
   printf("tri_area(%.0f, %.0f) ➞ %.0f",h,b,a); 
    return 0;
}
