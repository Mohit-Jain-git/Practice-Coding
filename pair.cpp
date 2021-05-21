#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll n;
  cin >> n;
  while (n--)
  {
    ll z;
    cin >> z;
    ll a[z];
    for (ll i = 0; i < z; i++)
      cin >> a[i];
    sort(a, a + z);
    cout << a[0] + a[1] << endl;
  }
  return 0;
}