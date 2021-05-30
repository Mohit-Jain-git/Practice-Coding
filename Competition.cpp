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
        int a[n],b[n],ma=0,mi=0,sum=0,s=0;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(mi<a[i])
        mi=a[i];
        sum=sum+a[i];
        }
        for(int i=0;i<n;i++)
        {
        cin>>b[i];
        if(ma<b[i])
         ma = b[i];
         s = s + b[i];
        }
       if((sum-mi)>(s-ma))
       cout<<"Bob"<<endl;
       else if((sum-mi)<(s-ma))
       cout<<"Alice"<<endl;
       else
       cout<<"Draw"<<endl;
   }
   return 0;
}