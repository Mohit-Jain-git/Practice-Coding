#include<bits/stdc++.h>
using namespace std;
long long int count(int x, int y)
{
    long long int ans = 0;
    unordered_map<long long int,long long int> m;
    while (x % y != 0) {
 
        x = x % y;
 
        ans++;
        if (m.find(x) != m.end())
            return -1;
 
        m[x] = 1;
        x = x * 10;
    }
    return ans;
}
int main()
{ 
   long long int t;
   cin>>t;
   while(t--)
   {
      long long int a,b;
      cin>>a>>b;
      long long int res = count(a,b);
      if(res!=-1)
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl; 
   }
   return 0;
}