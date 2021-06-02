#include<bits/stdc++.h>
// #define ll long long int 
using namespace std;
int main()
{ 
   int  t;
   cin>>t;
   while(t--)
   { 
      int n,m,c=0,i;
      cin>>n>>m;
      int a[m];
      for(i=0;i<m;i++)
      cin>>a[i];
      sort(a,a+m);
      for(int i=0;i<m-1;i++)
      { 
         if(a[i]!=a[i+1])
         c=c+2;
      }
      cout<<c<<endl;
   }
   return 0;
}