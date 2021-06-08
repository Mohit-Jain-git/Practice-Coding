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
      int a[n],b[n];
      int max = 0;
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=0;i<n;i++)
      cin>>b[i];
      for(int i=0;i<n;i++)
      { 
         if(max<(20*a[i]-10*b[i]))
          max = 20*a[i] - 10*b[i];
      }
      cout<<max<<endl;
   }
   return 0;
}