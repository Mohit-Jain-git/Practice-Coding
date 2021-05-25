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
     int i,c=0,z=0;
     int x = s.size();
     for(i=0;i<x;i++)
     { 
         if(s[i]=='a')
         c++;
         else
         z++;
     }
     cout<<min(c,z)<<endl;
   }
   return 0;
}