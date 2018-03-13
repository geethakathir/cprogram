#include<stdio.h>
void main()
{
	int n,num,i,sum=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("%d",sum);
  }
