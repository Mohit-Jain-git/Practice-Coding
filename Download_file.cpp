#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n,k;
      cin>>n>>k;
      int a[n],b[n];
      for(int i=0;i<n;i++)
      { 
         cin>>a[i]>>b[i];
      }
      int sum=0;
      for(int i=0;i<n;i++)
      { 
         if(a[i]<k)
         k = k-a[i];
         else
         { 
            sum = sum + (a[i]-k)*b[i];
            k=0;
         }
      }
      cout<<sum<<endl;
   }
   return 0;
}