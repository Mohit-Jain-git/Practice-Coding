#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

// Function to find gcd of array of
// numbers
ll findGCD(ll a[], int n)
{
  ll result = a[0];
  for (ll i = 1; i < n; i++)
  {
    result = gcd(a[i], result);

    if (result == 1)
    {
      return 1;
    }
  }
  return result;
}
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
    {
      cin >> a[i];
    }
    ll c = findGCD(a, z);
    for (ll i = 0; i < z; i++)
      cout << a[i] / c << " ";
    cout << endl;
  }
  return 0;
}