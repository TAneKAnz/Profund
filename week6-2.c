#include <stdio.h>
#include <math.h>

int main()
{
  int number;
  int time[3];
  scanf("%d", &number);
  for (int i = 2; i >= 0; i--)
  {
    time[i] = number / pow(60, i);
    number %= (int)pow(60, i);
  }
  printf("%d:%d:%d\n", time[2], time[1], time[0]);
  return 0;
}