#include <stdio.h>
void main()
{
    int a,i;
    printf("\n Enter a number");
    scanf("%d",&a);
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
            printf("\nYes");
        }
        else
        {
            printf("\nNo");
        }
    }
}
