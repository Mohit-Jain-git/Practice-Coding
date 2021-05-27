#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int a,b;
      cin>>a>>b;
      int i=1;
      while(a>=0 && b>=0)
      { 
          if(i%2==0)
          b=b-i;
          else
          a=a-i;
          i++;
      }
      if(a<0)
      cout<<"Bob"<<endl;
      else
      cout<<"Limak"<<endl;
   }
   return 0;
}