#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
       int s[4],e,f;
       for(int i=0;i<4;i++)
       { 
          cin>>s[i];
       }
        e = max(s[0],s[1]);
        f = max(s[2],s[3]);
       sort(s,s+4);
          if((e==s[2] && f==s[3]) || (e==s[3] && f==s[2]))
          cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
   }
   return 0;
}