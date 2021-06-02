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
      int start = 0;
      int end = s.size()-1;
      while(start<=end)
      { 
         if(s[start]=='.' && s[end]=='.')
         { 
            s[start]='a';
            s[end]='a';
         }
         else if(s[start]=='.')
         { 
            s[start] = s[end];
         }
         else if(s[end]=='.')
         { 
            s[end] = s[start];
         }
         else if(s[start] != s[end])
         { 
            s="-1";
            break;
         }
         start++;
         end--;
      }
      cout<<s<<endl;
   }
   return 0;
}