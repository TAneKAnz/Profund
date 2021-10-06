#include <stdio.h>

int main()
{
  int time, hr, min, sec;
  scanf("%d", &time);
  hr = time / 3600;
  time %= 3600;
  min = time / 60;
  time %= 60;
  sec = time;
  printf("%d:%d:%d\n", hr, min, sec);
  return 0;
}