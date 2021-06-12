#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   {
      int n,p,c=0,s=0;
      cin>>n>>p;
      int a[n];
      for(int i=0;i<n;i++)
      { 
         cin>>a[i];
         if(a[i]>=p/2)
         c++;
         else if(a[i]<=p/10)
         s++;
      }
      if(c==1 && s==2)
      cout<<"yes"<<endl;
      else
      cout<<"no"<<endl;
   }
   return 0;
}