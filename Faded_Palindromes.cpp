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
      long long int x = s.size();
      if(x%2==0)
      { 
         for(long long int i=0;i<x;i++)
         { 
            if(s[i]!=s[x-i-1])
            { 
               if(s[i]=='.')
               { 
                  s[i] = s[x-i-1];
                  cout<<s<<endl;
               }
               else if(s[x-i-1]=='.')
               { 
                  s[x-i-1] = s[i];
                  cout<<s<<endl;
               }
            }
          }
        }
         else
         { 
             for(long long int i=0;i<x;i++)
             { 
                if(s[i]!=s[x-i-1])
                {
                cout<<"-1"<<endl;
                return 0;
                } 
             }
             s[x/2]='a';
             cout<<s<<endl;
         }
      }
   }