#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    float h, c, t;
    cin >> h >> c >> t;
    if (h > 50 && c < 0.7 && t > 5600)
      cout << "10" << endl;
    else if (h > 50 && c < 0.7)
      cout << "9" << endl;
    else if (c < 0.7 && t > 5600)
      cout << "8" << endl;
    else if (h > 50 && t > 5600)
      cout << "7" << endl;
    else if (h > 50 || c < 0.7 || t > 5600)
      cout << "6" << endl;
    else if (h <= 50 && c >= 0.7 && t <= 5600)
      cout << "5" << endl;
  }
  return 0;
}