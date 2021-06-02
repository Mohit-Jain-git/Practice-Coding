#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{ 
   ll t;
   cin>>t;
   while(t--)
   { 
      ll n,i,k,d=0,m=0;
      string s;
      cin>>s;
      for(i=0;i<k;i++)
      { 
          int a;
          cin>>a;
           s[a-1] = !s[a-1];
      for(i=0;i<n-1;i++)
      { 
         if(s[i]=='0' && s[i+1]=='1')
         d = d + 1;
         else
         m = m + 2;
      }
         cout<<(d+m)<<endl;
      }
   }
}