#include <stdio.h>

int main()
{
  int n;
  printf("Enter number:");
  scanf("%d", &n);
  printf("Factoring Result: ");
  int i = 2;
  while (1 < n)
  {
    if (n % i == 0)
    {
      n = n / i;
      printf("%d ", i);
      i = 1;
      if (i != n)
      {
        printf("x ");
      }
    }
    i++;
  }
  printf("\n");
  return 0;
}