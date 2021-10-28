#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int fare(int x)
{
  int m = fmin(x,80);
  int y = (30-((floor((m-20.00)/30.00)+1)*5))*x;
  return y;
}
int main()
{
  int dist;
  scanf("%d", &dist);
  int cost = fare(dist);
  printf("%d\n", cost);
  return 0;
}