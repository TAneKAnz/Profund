#include <stdio.h>

int main()
{
  int a ,b;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  int i = 2, k = 1;
  if (a == 0 || b == 0)
  {
      a = 1, b = 1;
  }
  while (a != 1,-1 && b != 1,-1 && i >= 1)
  {
    if (a % i == 0 && b % i == 0)
    {
      //printf("i=%d ", i);
      a = a / i;
      //printf("a=%d ", a);
      b = b / i;
      //printf("b=%d ", b);
      k = k * i;
      //printf("k=%d\n", k);
      i = 1;
    }
    i++;
  }
  printf("Greatest common divisor: %d\n", k);
  return 0;
}