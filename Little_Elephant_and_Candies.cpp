#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }
    if (sum <= k)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}