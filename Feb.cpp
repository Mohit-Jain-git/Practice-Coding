#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
       int x,y,z,i,j=1;
       cin>>x>>y;
       int sum = x+y;
       for(i=2;i<(1000);i++)
       {
       if((sum+j)%i!=0)
       { 
          z=j;
          break;
       }
         j++;
       }
       cout<<(z)<<endl;
   }
   return 0;
}