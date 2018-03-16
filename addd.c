include <stdio.h>
int main()
{
int a[1000],i,j,t,lim;
scanf("%d",&lim);
for(i=0;i<lim;i++)
scanf("%d",&a[i]);
for(i=0;i<lim;i++)
{
for(j=i+1;j<lim;j++)
{
if(a[i]>a[j])
goto ele;
}
}
else:
{
printf("%d",a[i]);
}
return 0;
}
