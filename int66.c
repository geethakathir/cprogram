#include <stdio.h>
int power_of_2(unsigned int);
int main()
{
 unsigned int num;
 printf("\nEnter Number");
 scanf("%d", &num);
 power_of_2(num);
 }
 int power_of_2(unsigned int x)
 {
 int i, count = 0, result, shift_num;
 for (i = 0;i<n;i++)
 {
shift_num = x>>i;
result = shift_num & 1;
if (res == 1)
count++;
}
if (count % 2 == 1)
printf("YES");
else 
printf("NO");
}
