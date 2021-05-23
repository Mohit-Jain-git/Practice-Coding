#include <iostream>
using namespace std;
int sum(int n)
{
  int sum = 0;
  for (int x = 1; x <= n; x++)
    sum = sum + x;
  return sum;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int d, n, c;
    cin >> d >> n;
    while (d--)
    {
      c = sum(n);
      n = c;
    }
    cout << c << endl;
  }
  return 0;
}