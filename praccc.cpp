#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
      cout << (2 * n - 2 * k) << endl;
    }
    else
    {
      cout << (2 * n - 2 * k + 2) << endl;
    }
  }
  return 0;
}