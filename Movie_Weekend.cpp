#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t,c=0;
   cin>>t;
   while(t--)
   { 
      int n,max=0;
      cin>>n;
      int a[n],b[n];
      for(int i=1;i<=n;i++)
      cin>>a[i];
      for(int i=1;i<=n;i++)
      cin>>b[i];
      for(int i=1;i<=n;i++)
      { 
         if(max<a[i]*b[i])
         {
         max=a[i]*b[i];
         c++;
         }
         if(c>1)
         { 
             
         }

      }
   }
}