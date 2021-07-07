#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, z = 0;
  cin >> t;
  while (t--)
  {
    int p, v, t, a = 0, b = 0;
    cin >> p >> v >> t;
    if (p == 1)
      a++;
    else
      b++;
    if (v == 1)
      a++;
    else
      b++;
    if (t == 1)
      a++;
    else
      b++;
    if (a >= 2)
      z++;
  }
  cout << z << endl;
  return 0;
}