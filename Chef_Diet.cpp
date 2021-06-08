#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
     int n,k,c=0;
     cin>>n>>k;
     int a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
     for(int i=0;i<n;i++)
     { 
        if(a[i]>=k)
        {
        a[i+1] += a[i]-k;
        c++;
        }
        else
        {
        cout<<"NO"<<" "<<i+1;
        break;
        }
     }
      cout<<endl;
      if(c==n)
      cout<<"YES"<<endl;
   }
}