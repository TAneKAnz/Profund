#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int z = (2*n-2)/2;
  for (int i = z; i >= -z; i--)
  {
    //printf("* ");
    for (int j = -z; j <= z; j++)
    {
      if ((i >= j && i <= -j) | (i <= j && i >= -j))
      {
        printf("*  ");
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
}