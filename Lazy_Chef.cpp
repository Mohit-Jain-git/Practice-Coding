#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{ 
   ll t;
   cin>>t;
   while(t--)
   { 
     ll x,m,d;
     cin>>x>>m>>d;
     if((x*m)>=(x+d))
     cout<<(x+d)<<endl;
     else
     cout<<(x*m)<<endl;
   }
}