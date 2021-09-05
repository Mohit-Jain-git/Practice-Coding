#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, s = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      s = s + a[i];
    }
    if (s % 2 == 0 && k % 2 != 0)
      cout << "even" << endl;
    else if (s % 2 == 0 && k % 2 == 0)
      cout << "even" << endl;
    else if (k % 2 == 0 && s % 2 != 0)
      cout << "even" << endl;
    else
      cout << "even" << endl;
  }
  return 0;
}
