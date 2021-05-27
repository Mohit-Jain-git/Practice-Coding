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
      int c=0,p=0;
      int x = s.length();
      for(int i=0;i<x;i++)
      { 
         if(s[i]=='1')
         c++;
         else
         p++;
      }
      if(c==1 || p==1)
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl;    
   }
   return 0;
}