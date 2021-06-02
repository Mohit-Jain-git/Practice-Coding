#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   long long int t;
   cin>>t;
   while(t--)
   { 
      long long int a,b,c,d,k,i;
      cin>>a>>b>>c>>d>>k;
      long long dist = abs(a-c) + abs(b-d);
      if(dist<=k && (k-dist)%2==0)
      cout<<"YES"<<endl;
      else 
      cout<<"NO"<<endl;
   }
   return 0;
}