#include <stdio.h>

int main()
{
  int a,b,c;
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);
  printf("c: ");
  scanf("%d", &c);
  int max = 0;
  if (a > b)
  {
    max = a;
    if (c > a)
    {
      max = c;
    }
  }
  else
  {
    max = b;
    if (c > b)
    {
      max = c;
    }
  }
  printf("Max: %d\n", max);
  return 0;
}