#include <stdio.h>
void main()
{
	int l,b,h;
	printf("\nEnter the l,b,h values of a cuboid:");
	scanf("%d",&l);
	scanf("%d",&b);
	scanf("%d",&h);
	printf("\nThe total surface area of cuboid is %d.",((2*l*b)+(2*b*h)+(2*l*h)));
	printf("\nThe volume of the cuboid is %d",(l*b*h));
	}
