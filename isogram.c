#include<stdio.h>
#include<string.h>
int main()
{
	char a[40];
	int i,j,l,count=0;
	printf("\nEnter the String:");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<=l;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
	}
	if(count==0)
	{
		printf("\nIsogram");
	}
	else
	{
		printf("\nNot a Isogram");
	}
  return 0;
}
