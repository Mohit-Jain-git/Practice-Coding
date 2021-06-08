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
       int p,s;
       int a[n];
       for(int k=1;k<=11;k++)
        a[k]=0;
       for(int i=0;i<n;i++)
       { 
            cin>>p>>s;
            if(p<9 && a[p]<s)
            a[p]=s;
       }
       for(int i=1;i<11;i++)
        sum = sum + a[i];
       cout<<sum<<endl;
   }
   return 0;
}