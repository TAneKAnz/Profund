#include <stdio.h>
int open = 0;
void exchange(int close)
{
  int free = close / 3;
  open += free * 3;
  close %= 3;
  close += free;
  if (close >= 3)
  {
    exchange(close);
  }
  else
  {
    open += close;
  }
}
int main()
{
  int bottle;
  scanf("%d", &bottle);
  int close = bottle;
  exchange(close);
  printf("%d\n", open);
}
