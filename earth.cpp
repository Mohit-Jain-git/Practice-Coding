#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      double n,v1,v2;
      cin>>n>>v1>>v2;
      if(n*2*v1 > n*sqrt(2)*v2)
      cout<<"Stairs"<<endl;
      else
      cout<<"Elevator"<<endl;
   }
   return 0;
}