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
    ll max = 0;
    for (ll i = 1; i < n; i++)
    {
      if (n % i > max)
        max = n % i;
    }
    cout << n - max << endl;
  }
}
