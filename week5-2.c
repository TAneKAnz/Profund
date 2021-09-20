#include <stdio.h>
#include <math.h>
#include <string.h>

void recursion();
int binary();
int n;
int main()
{
  char input[10000];
  int sum = 0;
  printf("Input: ");
  scanf("%s", input);
  n = strlen(input);
  int inputc[n];
  for (int i = 0; i < n; i++)
  {
    inputc[i] = input[i] - '0';
  }
  recursion(inputc, 7);
  return 0;
}

void recursion(int arr[], int i)
{
  int x = binary(arr, i, i, 0);
  printf("%c", x);
  if (i+1 < n)
  {
    recursion(arr, i+8);
  }

}

int binary(int ar[], int j, int k, int sum)
{
  sum += ar[j]*pow(2, k-j);
  if (k-j < 7)
  {
    return binary(ar, j-1, k, sum);
  }
  else if (k-j == 7)
  {
    return sum;
  }
}