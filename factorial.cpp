#include <iostream>
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
    ll fact = 1;
    while (x >= 1)
    {
      fact = fact * x;
      x--;
    }
    cout << fact << endl;
  }
  return 0;
}
