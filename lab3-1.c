#include <stdio.h>

int sum(int n);

int main()
{
  int n;
  printf("Enter number: ");
  scanf("%d", &n);
  while (n >= 10)
  {
    n = sum(n);
  }
  printf("Sum = %d\n", n);
  return 0;
}

int sum(int x){
  int sum = 0;
  while (x > 0)
  {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}