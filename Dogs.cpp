#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
     int c,d,l;
     cin>>c>>d>>l;
     int z = c+d;
     if(l>(4*z))
     cout<<"no"<<endl;
     else if(l<4)
     cout<<"no"<<endl;
     else if(c>2 && d<=1 && l<4)
     cout<<"no"<<endl;
     else
     cout<<"yes"<<endl;
   }
   return 0;
}