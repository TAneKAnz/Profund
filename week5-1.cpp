#include <bits/stdc++.h>
using namespace std;

int main()
{
  string input;
  cin>>input;
  int n = strlen(input);
  int z = n / 8;
  int num[n];
  for (int i = 0; i < n; i++)
  {
    num[i] = input[i] - '0';
  }
  double sum, x;
  for (int i = 0; i < z; i++)
  {
    for (int j = 0; j <= 7; )
    {
      x = num[8*i+j];
      sum += pow(x, (double)j);
    }
    printf("%lf", sum);
    sum = 0;
  }
  return 0;
}