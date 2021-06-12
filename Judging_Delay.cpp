#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n,c=0;
      cin>>n;
      int s[n],j[n];
      for(int i=0;i<n;i++)
      { 
         cin>>s[i]>>j[i];
         if((j[i]-s[i])>5)
         c++;
      }
      cout<<c<<endl;
   }
   return 0;
}