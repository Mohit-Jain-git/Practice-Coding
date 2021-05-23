#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll a[n];
    ll k, x, i;
    for (i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    cin >> k;
    x = a[k];
    sort(a, a + n);
    for (i = 1; i <= n; i++)
    {
      if (a[i] == x)
      {
        cout << i << endl;
      }
    }
  }
  return 0;
}