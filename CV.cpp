#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n;
      cin>>n;
      int c=0;
      string s;
      cin>>s;
      for(int i=0;i<n-1;i++)
      { 
         if((s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') && (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u'))
         c++;
      }
      cout<<c<<endl;
   }
   return 0;
}