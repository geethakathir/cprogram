#include <stdio.h> 
void main()
{
int num,temp,digit,sum = 0;
printf("Enter the number");
scanf("%d", &num);
temp = num;
while (num > 0)
{
digit = num % 10;
sum = sum + digit;
num = 10;
}
printf("Given number = %d", temp);
printf("Sum of the digits %d = %d",temp,sum);
}
