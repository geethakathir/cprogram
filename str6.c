#include <stdio.h>
#include<math.h>
 
int main()
{
  int array[100], max, size, c, location = 1;
 
  printf("Enter the number of elements in array");
  scanf("%d", &size);
 
  printf("Enter %d int", size);
 
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);
 
  max=array[0];
 
  for (c = 1; c < size; c++)
  {
    if (array[c] > max)
    {
       max  = array[c];
       location = c+1;
    }
  }
 
  printf("the maximum  element is present");
  return 0;
  }
  }

