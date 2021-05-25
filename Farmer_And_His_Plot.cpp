#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int l,b,i;
      cin>>l>>b;
      int x = l*b;
      for(int i=2;i<sqrt(x);i++)
      { 
          if(x%(i*i)==0)
          {
            int y = i*i;
            int z = (x/y);
            cout<<z<<endl;
          }
      }
   }
}