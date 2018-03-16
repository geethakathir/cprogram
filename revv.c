#include<stdio.h>
int main()
{
int a,r,s=0;
printf("Enter the number");
scanf("%d",&n);
while(a>0)
{
r=a%10;
s=s*10+r;
a/=10;
}
printf("The reverse of the given number is %d",s);
return 0;
}
