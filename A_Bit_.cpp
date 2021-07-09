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
    if (s[0] == '+')
      s[2] = ++s[2];
    else if (s[0] == '-')
      s[2] = --s[2];
    else if (s[2] == '-')
      s[2]++;
  }
}