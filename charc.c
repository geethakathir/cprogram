#include<stdio.h>
#include<string.h>
int main()
{
char a[15]="science";
int b,n,i;
b=strlen(a);
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",a[b-1]);
b--;
}
return 0;
}
