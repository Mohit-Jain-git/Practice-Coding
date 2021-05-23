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
    ll k;
    cin >> k;
    for (ll i = 1; i <= n; i++)
      cin >> a[i];
    ll x = a[k];
    sort(a, a + n);
    for (ll i = 1; i <= n; i++)
    {
      if (x == a[i])
      {
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}