#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n,k,sum=0,i,s=0;
      cin>>n>>k;
      vector<int> a(n);
      for(auto &x: a)
      cin>>x;
      sort(a.begin(),a.end());
      while(k--)
      { 
         sum += a.back();
         a.pop_back();
         s += a.back();
         a.pop_back();
      }
       s += a.back();
       cout<<max(s,sum)<<endl;
    }
   return 0;
}