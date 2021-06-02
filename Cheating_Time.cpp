#include<bits/stdc++.h>
// #define ll long long int 
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n,k,f,flag=0;
      cin>>n>>k>>f;
      int s[n],e[n];
      for(int i=0;i<n;i++)
      { 
         cin>>s[i]>>e[i];
      }
      for(int i=0;i<n-1;i++)
      { 
         if((s[i+1]-e[i])>k)
         { 
           flag=1;
           break;
         }
      }
      if(flag==1)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
   }
   return 0;
}