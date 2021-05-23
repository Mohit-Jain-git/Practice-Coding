#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll n;
  cin >> n;
  ll a[n], b[n];
  ll i, j = 0;
  for (i = 1; i <= n; i++)
  {
    cin >> a[i];
    cin >> b[i];
  }
  ll max = abs(a[1] - b[1]);
  for (i = 2; i <= n; i++)
  {
    if (max < (abs(a[i] - b[i])))
    {
      max = abs(a[i] - b[i]);
      j = i;
    }
  }
  if (a[j] - b[j] > 0)
    cout << 1 << " " << max << endl;
  else
    cout << 2 << " " << max << endl;
}