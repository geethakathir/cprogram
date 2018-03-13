#include <stdio.h>
void main()
{
	int a[50],n,b,i;
	printf("\nEnter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the K value: ");
	scanf("%d",&b);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe %dth element  is %d.",b,a[k-1]);
	return 0;
}
