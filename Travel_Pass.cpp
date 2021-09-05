#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, a, b, e = 0, f = 0;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '0')
        e++;
      else
        f++;
    }
    cout << (a * e + b * f) << endl;
  }
  return 0;
}