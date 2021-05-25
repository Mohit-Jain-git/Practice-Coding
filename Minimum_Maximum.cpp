#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n;
      cin>>n;
      int a[n],sum=0,i,min=INT_MAX;
      for(i=0;i<n;i++)
      { 
          cin>>a[i];
      }
      sort(a,a+n);
        cout<<(a[0]*(n-1))<<endl;
   }
   return 0;
}