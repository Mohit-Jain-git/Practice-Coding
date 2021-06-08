#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   long long int t;
   cin>>t;
   while(t--)
   { 
      string s;
      cin>>s;
      long long int c=0;
      for(long long int i=0;i<s.size();i++)
      { 
           if(s[i]=='<' && s[i+1]=='>')
           c++;
      }
      cout<<c<<endl;
   }
   return 0;
}