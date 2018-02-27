#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("\n enter the numbers:");
	scanf("%d%d",&n1,&n2);
	n3=n1-n2;
	if(n3%2==0)
	{
		printf("\n the number is Even");
	}
	else
	{
		printf("\n the number is odd");
	}
	return 0;
}
