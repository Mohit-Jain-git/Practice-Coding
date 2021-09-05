#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, s = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
      if (a[i] % 2 == 0 && i % 2 == 0)
      {
        int x = a[i];
        a[i] = a[i + 1];
        a[i + 1] = x;
      }
      b[i] = (a[i] + i) % 2;
    }
    for (int i = 1; i <= n; i++)
    {
      s = s + b[i];
    }
    cout << s << endl;
  }
  return 0;
}