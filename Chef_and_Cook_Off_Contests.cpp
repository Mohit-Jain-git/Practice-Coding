#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n,a=0,b=0,c=0,d=0,e=0;
      cin>>n;
      for(int i=0;i<n;i++)
      { 
         string s;
         cin>>s;
         if(s=="cakewalk")
         a++;
         else if(s=="simple")
         b++;
         else if(s=="easy")
         c++;
         else if(s=="easy-medium" || s=="medium")
         d++;
         else if(s=="medium-hard" || s=="hard")
         e++;
      }
      if(a>=1 && b>=1 && c>=1 && d>=1 && e>=1)
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl;
   }
   return 0;
}