#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int s = 0;
    int e = n - 1;
    int c = 0;

    while (s < e)
    {
      if (a[s] == a[e])
      {
        c++;
      }
      s++;
      e--;
    }
    if (c == n / 2 && a[0] == 1 && a[n / 2] - a[n / 2 - 1] == 1)
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
  return 0;
}