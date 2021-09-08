#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int z = 2*n-1;
  for (int i = 0; i < z/2; i++)
  {
    for (int j = 0; j < z; j++)
    {
      if (j < i || j >= z-i)
      {
        printf(" ");
      }
      else
      {
        printf("*");
      }
    }
    if (i != n-2)
    {
      printf("\n");
    }
  }
  for (int i = z/2; i <= z; i++)
  {
    for (int j = 0; j < z; j++)
    {
      if (j >= i || j < z-i)
      {
        printf(" ");
      }
      else
      {
        printf("*");
      }
    }
    printf("\n");
  }
}