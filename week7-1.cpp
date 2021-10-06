#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 100;
  string word[n];
  for (int i = 0; i < n; i++)
  {
    string nword = "";
    cin>>word[i];
    if (word[i] == "finished")
    {
      return 1;
    }
    for (int j = 0; j < word[i].length(); j++)
    {
      if (j == 0)
      { 
        if (word[i][j] >= 'a')
        {
          nword += word[i][j] - 32;
        }
        else
        {
          nword += word[i][j];
        }
      }
      else
      {
        if (word[i][j] < 'a')
        {
          nword += word[i][j] + 32;
        }
        else
        {
          nword += word[i][j];
        }
      }
    }
    cout<<nword<<' ';
  }
  return 0;
}