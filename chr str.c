#include<stdio.h>
#include<string.h>
void main()
{
    char s[40];
    int l,i;
    printf("enter string");
    scanf("%s",&s[i]);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]%2==0)
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
    for(i=0;i<l;i++)
    {
        if(s[i]%2!=0)
        {
        printf("%c",s[i]);
        }
    }
}
