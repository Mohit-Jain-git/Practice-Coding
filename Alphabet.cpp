#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   string s;
   cin>>s;
   int t;
   cin>>t;
   while(t--)
   { 
      string p;
      int c=0;
      cin>>p;
      for(int i=0;i<p.size();i++)
      { 
         for(int j=0;j<s.size();j++)
         { 
           if(p[i]==s[j])
           { 
             c++;
           }
         }
      }
      if(c==p.size())
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl;
   }
}