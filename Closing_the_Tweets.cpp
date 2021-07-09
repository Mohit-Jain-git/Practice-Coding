#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, k, num;
   cin >> n >> k;
   bool a[n] = {0};
   while (k--)
   {
      int count = 0;
      string s;
      cin >> s;
      if (s == "CLOSEALL")
      {
         for (int i = 0; i < n; i++)
         {
            a[i] = false;
         }
         cout << "0" << endl;
         continue;
      }
      cin >> num;
      a[num - 1] ^= 1;
      for (int i = 0; i < n; i++)
      {
         if (a[i])
         {
            count++;
         }
      }
      cout << count << endl;
   }
   return 0;
}