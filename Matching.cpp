#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      string x,y;
      cin>>x>>y;
      int i,j,flag=0;
      for(i=0,j=0;i<x.size(),j<y.size();i++,j++)
      { 
          if(x[i]>='a' && x[i]<='z' && y[i]>='a' && y[i]<='z')
          { 
              if(x[i]!=y[j])
              { 
                 flag=1;
                 break;
              }
          }
      }
       if(flag==1)
       cout<<"No"<<endl;
       else
       cout<<"Yes"<<endl;
   }
   return 0;
}