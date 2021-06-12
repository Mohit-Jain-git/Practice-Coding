#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int p,k,s=0,sum=0;
      cin>>p>>k;
      int a[p];
      for(int i=0;i<p;i++)
      {
        cin>>a[i];
        sum=sum+a[i];
        if(a[i]>k)
        a[i]=k;
        s = s + a[i];
      }
       cout<<(sum-s)<<endl;
   }
   return 0;
}