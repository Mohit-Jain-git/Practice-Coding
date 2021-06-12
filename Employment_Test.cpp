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
      int a[n];
      for(int i=0;i<n;i++)
      { 
         cin>>a[i];
      }
      sort(a,a+n);
      if(k==n-1)
      cout<<a[n-1]<<endl;
      if(k<n-1)
      cout<<a[(n+k)/2]<<endl;
      if(k>n-1)
      cout<<"9"<<endl;
   }
   return 0;
}