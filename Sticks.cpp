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
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      sort(a,a+n);
      int x=1,c=0,s=-1;
      for(int i=n-1;i>=0;i--)
      { 
          if(a[i]==a[i-1])
          { 
             x=x*a[i];
             
             c++;
             if(c==2)
             break;
          }
      }
      if(c==2)
      cout<<x<<endl;
      else
      cout<<s<<endl;
   }
   return 0;
}