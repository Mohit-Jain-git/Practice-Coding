#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t,c=0;
   cin>>t;
   while(t--)
   { 
      string s;
      cin>>s;
      for(int i=0;i<s.size()-1;i++)
      { 
          if((s[i]=='c' && s[i+1]=='h') || (s[i]=='h' && s[i+1]=='e') || (s[i]=='e' && s[i+1]=='f'))
          {
          c++;
          break;
          }
      }
   }
    cout<<c<<endl;
   return 0;
}