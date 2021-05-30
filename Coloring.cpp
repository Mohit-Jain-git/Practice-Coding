#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n,r=0,g=0,b=0;
      cin>>n;
      char a[n];
      for(int i=0;i<n;i++)
      { 
         cin>>a[i];
         if(a[i]=='R')
         r++;
         else if(a[i]=='B')
         b++;
         else 
         g++;
      }
      int k = max(r,max(g,b));
      cout<<(n-k)<<endl;
   }
   return 0;
}