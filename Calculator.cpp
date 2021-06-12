#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int x,y,re,rem,sum=0;
      cin>>x>>y;
      if(x%10!=0 && y%10!=0)
      { 
         sum = sum + (x+y)%10;
         x = x/10;
         y = y/10;
      } 
      cout<<sum<<endl;
   }
   return 0;
}