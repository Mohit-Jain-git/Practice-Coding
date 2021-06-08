#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
   long long int t;
   cin>>t;
   while(t--)
   { 
      long long int a,b;
      cin>>a>>b;
      cout<<((a/2)*(b/2) + ((a+1)/2)*((b+1)/2))<<endl;
   }
   return 0;
}