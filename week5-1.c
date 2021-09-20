#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  char input[10000];
  scanf("%s", input);
  int n = strlen(input);
  long inputc[n];
  for (int i = 0; i < n; i++)
  {
    inputc[i] = input[i] - '0';
  }
  int z = n/8;
  int sum = 0;
  for (int i = 1; i <= z; i++)
  {
    for (int j = 7; j >= 0; j--)
    {
      int x = 8*i-j-1;
      sum += inputc[x]*pow(2, j);
    }
    printf("%c", sum);
    sum = 0;
  }
  return 0;
}