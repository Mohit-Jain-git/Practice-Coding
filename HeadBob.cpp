#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    char a[x];
    for (int i = 0; i < x; i++)
    {
      cin >> a[i];
    }
    int z = 0;
    for (int i = 0; i < x; i++)
    {
      if (a[i] == 'Y')
      {
        z = 1;
        break;
      }
      if (a[i] == 'I')
      {
        z = 2;
        break;
      }
    }
    if (z == 1)
      cout << "NOT INDIAN" << endl;
    else if (z == 2)
      cout << "INDIAN" << endl;
    else
      cout << "NOT SURE" << endl;
  }
  return 0;
}