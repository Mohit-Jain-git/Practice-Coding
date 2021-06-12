#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int a[11][11],q=0,p=0;
      for(int i=0;i<10;i++)
      { 
         for(int j=0;j<10;j++)
         { 
            cin>>a[i][j];
            if(a[i][j]>30)
            p++;
            else
            q++;
         }
      }
      if(q>=60)
      cout<<"yes"<<endl;
      else
      cout<<"no"<<endl;
   }
   return 0;
}