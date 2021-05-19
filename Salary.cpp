#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll n;
  cin >> n;
  while (n--)
  {
    ll x;
    cin >> x;
    float h, d, g;
    if (x < 1500)
    {
      h = float(x) * 0.1;
      d = float(x) * 0.9;
      printf("%.2f\n", h + d + float(x));
    }
    if (x >= 1500)
    {
      h = 500;
      d = float(x) * 0.98;
      printf("%.2f\n", h + d + float(x));
    }
  }
  return 0;
}
