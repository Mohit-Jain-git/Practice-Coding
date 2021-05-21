#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll n;
  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    ll l = s.length();
    ll flag = 1;
    for (ll i = 1; i <= (l) / 2; i++)
    {
      for (ll j = (l + 1) / 2; j < l + 1; j++)
      {
        if (s[i] != s[j])
        {
          flag = 0;
          break;
        }
      }
    }
    if (flag == 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}