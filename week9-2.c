#include <stdio.h>
int main()
{
  int dist, cost = 30;
  scanf("%d", &dist);
  cost -= dist<=49&&dist>=20 ? 5 : dist<=79&&dist>=50 ? 10 : dist>=80 ? 15 : 0;
  cost *= dist;
  printf("%d\n", cost);
  return 0;
}