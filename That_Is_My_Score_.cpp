#include<bits/stdc++.h>
#define ll
using namespace std;
int main()
{ 
   int  t;
   cin>>t;
   while(t--)
   { 
       int n,sum=0;
       cin>>n;
       int p[n],s[n];
       for(int i=0;i<n;i++)
       { 
          cin>>p[i]>>s[i];
       }
       for(int i=0;i<n;i++)
       { 
          if(p[i]>=1 && p[i]<=8)
          { 
             sum = sum + s[i];
          }
       }
       cout<<sum<<endl;
   }
   return 0;
}