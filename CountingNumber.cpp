#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll n;
  cin >> n;
  ll a[n];
  for (ll i = 0; i < n; i++)
  {
    ll rem, c = 0;
    cin >> a[i];
    while (a[i] != 0)
    {
      rem = a[i] % 10;
      if (rem == 4)
        c++;
      a[i] = a[i] / 10;
    }
    cout << c << endl;
  }
  return 0;
}
