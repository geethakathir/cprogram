#include <stdio.h>
void main()
{
int n1,n2,g,i,l;
printf("Enter two numbers:");
scanf("%d%d",&n1,&n2);
for(i=1;(i<n1)&&(i<n2);i++)
{
if(n1%i==0 && n2%i==0)
{
g=i;
}
}
l=(n1*n2)/g;
printf("lcm is %d",l);
return 0;
}
