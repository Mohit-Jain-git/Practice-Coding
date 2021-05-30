#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n,k,c=0;
      cin>>n>>k;
      int a[n],b[n];
      for(int i=0;i<n;i++)
      { 
         cin>>a[i];
         b[i] = a[i] + k;
      }
      for(int i=0;i<n;i++)
      { 
        if(b[i]%7==0)
        c++;
      }
      cout<<c<<endl;
   }
   return 0;
}