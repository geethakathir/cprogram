#include<stdio.h>
void
main ()
{
  int a, b, add;
  printf ("\nenter the numbers:");
  scanf ("%d%d", &a, &b);
  add = a + b;
  if ((add % 2) == 0)
    {
      printf ("EVEN");
    }
  else
    {
      printf ("ODD");
    }
}
