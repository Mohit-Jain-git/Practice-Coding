#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      string s;
      cin>>s;
      int flag=0,i=0,x=s.size();
      if(s[0]==s[1])
      cout<<"NO"<<endl;
      else
      {
      for(i=0;i<x-2;i++)
      { 
          if(s[i]!=s[i+2])
          { 
            flag=1;
            break;
          }
      }
      if(flag==1)
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
   }
   }
   return 0;
}