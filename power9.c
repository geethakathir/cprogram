#include<stdio.h>
int main()
{
 int a,b;
 printf("\nenter the number:");
 scanf("%d",&a);
 printf("\n the nearest greatest number is");
 a=a-1;
 b=pow(2,a);
 printf("\nthe power of number is %d",b);
 return 0;
 }
