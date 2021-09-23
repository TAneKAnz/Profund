#include <stdio.h>
#include <string.h>
#include <tgmath.h>

int main()
{
  char input[1000];
  scanf("%s", input);
  int n = strlen(input);
  int z = n / 8;
  int num[n];
  for (int i = 0; i < n; i++)
  {
    num[i] = input[i] - '0';
  }
  int sum = 0, x;
  for (int i = 0; i < z; i++)
  {
    for (int j = 7; j >= 0; j--)
    {
      x = num[8*i+j];
      sum += x*pow(2, 7-j);
    }
    printf("%c", (char)sum);
    sum = 0;
  }
  return 0;
}