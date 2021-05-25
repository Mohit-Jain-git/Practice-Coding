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
       int a[n],i;
       for(i=0;i<n;i++)
       { 
          cin>>a[i];
          if(k>=a[i])
          { 
             k=k-a[i];
             cout<<"1";
          }
          else
          {
          cout<<"0";
          }
       }
       cout<<endl;
   }
   return 0;
}