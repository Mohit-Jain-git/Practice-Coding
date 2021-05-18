#include <iostream>
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
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
      b[i] = 0;
      for (ll j = i + 1; j < n; j++)
      {
        if (a[j] > a[i])
          b[i]++;
      }
      cout << b[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
