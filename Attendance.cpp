#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int m;
      cin>>m;
      string s[2*m];
      for(int i=0;i<2*m;i++)
       cin>>s[i];
      for(int i=0;i<2*m-2;i=i+2)
      { 
         for(int j=i+2;j<2*m;j=j+2)
         { 
            int x = s[i].compare(s[j]);
            if(x==0)
            cout<<s[i]<<" "<<s[i+1]<<endl;
            else
            cout<<s[i]<<endl;
         }
      }
   }
   return 0;
}