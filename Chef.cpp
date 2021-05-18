#include <iostream>
#define ll long long int
using namespace std;
int main()
{
  ll n, m, k, c = 0;
  cin >> n >> m >> k;
  ll a[n][k], q[n];
  for (ll i = 0; i < n; i++)
  {
    ll sum = 0;
    for (ll j = 0; j < k; j++)
    {
      cin >> a[i][j];
      sum += a[i][j];
    }
    cin >> q[i];
    if (sum >= m && q[i] <= 10)
      c++;
  }
  cout << c << endl;
}