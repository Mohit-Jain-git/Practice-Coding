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
      int flag=0;
      for(int i=0;i<s.length();i++)
      { 
          if((s[i+1]=='C' && s[i]=='E') || (s[i+1]=='E' && s[i]=='S') || (s[i+1]=='C' && s[i]=='S'))
          { 
             flag=1;
             break;
          }
      }
      if(flag==0)
      cout<<"yes"<<endl;
      else
      cout<<"no"<<endl;
   }
   return 0;
}