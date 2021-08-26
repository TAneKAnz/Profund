#include <stdio.h>

int px();

int main()
{
  int n = 10000, total = 100;
  int arr[total];
  for (int i = 1; i < n; i++)
  {
    int x = px(i);
    if (x == i)
    {
      printf(" %d", x);
    }
  }
  printf("\n");
  return 0;
}

int px(int x)
{
  int sum = 0;
  for (int i = 1; i < x; i++)
  {
    if (x % i == 0)
    {
      sum += i;
    }
  }
  return sum;
}