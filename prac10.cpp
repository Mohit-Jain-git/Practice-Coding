#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a[6], d = 0, f = 0;
    for (int i = 0; i < 5; i++)
    {
      cin >> a[i];
      if (a[i] == 1)
        d++;
      else if (a[i] == 2)
        f++;
    }
    if (d == f)
    {
      cout << "DRAW" << endl;
    }
    else if (d > f)
      cout << "INDIA" << endl;
    else
      cout << "ENGLAND" << endl;
  }
  return 0;
}