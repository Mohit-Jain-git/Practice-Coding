#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll n;
  cin >> n;
  while (n--)
  {
    float q, p;
    cin >> q >> p;
    if (q < 1000)
      printf("%0.6f\n", q * p);
    else
    {
      float z = (q * p) * 0.9;
      printf("%0.6f\n", z);
    }
  }
  return 0;
}
