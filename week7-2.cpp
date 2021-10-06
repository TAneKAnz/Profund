#include <bits/stdc++.h>
using namespace std;

int main()
{
  string word[100];
  do
  {
    scanf("%s", word[i]);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < size.word[i]; j++)
    {
      if (j == 0)
      {
        if (word[i][j] < 'A')
        {
          word[i][j] = word[i][j] + 'A' - 'a';
        }
      }
      else
      {
        if (word[i][j] >= 'A')
        {
          word[i][j] = word[i][j] + 'a' - 'A';
        }
      }
    }
    printf("%s ", word[i]);
  }
}