#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int x = s.length();
    int flag = 0, i, j;
    if (x % 2 == 0)
    {
      for (i = 0, j = x / 2; i < (x / 2), j < x; i++, j++)
      {
        if (s[i] != s[j])
        {
          flag = 1;
          break;
        }
      }
    }
    else
    {
      for (i = 0, j = (x / 2) + 1; i < x / 2, j < x; i++, j++)
      {
        if (s[i] != s[j])
        {
          flag = 1;
          break;
        }
      }
    }
    if (flag == 1)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}