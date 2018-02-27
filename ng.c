#include<stdio.h>
int main()
{
int a,i;
scanf("%d",&a);
for(i=a;;i++)
{
if(i%10==0)
{
printf("%d",i);
break;
}
}
return 0;
}
