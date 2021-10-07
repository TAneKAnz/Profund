#include <bits/stdc++.h>
using namespace std;

int main()
{
  string word[100];
  int n = 0;
  do{
    cin>>word[n];
    n++;
  }while (word[n-1] != "finished");
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < word[i].length(); j++)
    {
      if (j == 0)
      {
        if (word[i][j] >= 'a')
        {
          word[i][j] = word[i][j] - 32;
        }
      }
      else
      {
        if (word[i][j] < 'a')
        {
          word[i][j] = word[i][j] + 32;
        }
      }
    }
    cout<<word[i]<<' ';
  }
  return 0;
}