#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      string s;
      int c=0,d=0;
      cin>>s;
      for(int i=0;i<s.size();i++)
      { 
         if(s[i]=='1')
         c++;
         else
         d++;
      }
      if(c>d)
      cout<<"WIN"<<endl;
      else if(c==d && s[0]=='1')
      cout<<"WIN"<<endl;
      else
      cout<<"LOSE"<<endl;
   }
   return 0;
}