#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   long long int n;
   cin>>n;
   vector<long long int> v(n);
   for(long long int i=0;i<n;i++)
   cin>>v[i];
   sort(v.begin(),v.end(),greater<int>());
   for(long long int i=0;i<n;i++)
   {
      if(v[0]!=v[i+1])
      {
      cout<<(v[i+1]%v[0])<<endl;
      return 0;
      }
   }
   return 0;
}