#include <stdio.h>

int main()
{
  int bottle;
  scanf("%d", &bottle);
  int free = bottle;
  int ubottle = 0;
  int r = 0;
  while (free >= 3)
  {
    r = free % 3;
    free /= 3;
    ubottle += free * 3;
    free += r;
  }
  ubottle += free;
  printf("%d\n", ubottle);
  return 0;
}