#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n,c=0,pos=-1;
      cin>>n;
      int a[n],i;
      for(i=0;i<n;i++)
      { 
          cin>>a[i];
          if(a[i]<=7)
          c++;
          if(c==7)
          { 
             pos=i+1;
             c++;
          }
          
      }
      cout<<pos<<endl;
   }
   return 0;
}