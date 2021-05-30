#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n,k,c=0;
      cin>>n;
      while(n>0)
      { 
         k=floor(sqrt(n));
         n = n - k*k;
         c++;
      }
      cout<<c<<endl;
   }
   return 0;
}