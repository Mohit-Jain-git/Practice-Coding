#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
       string s;
       int max=0,count[ASCII_SIZE]={0};
       cin>>s;
       for(int i=0;i<s.length();i++)
       { 
          count[s[i]]++;
          if(max<count[s[i]])
          max=count[s[i]];
       }
       if(max==(s.length()-max))
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
   }
   return 0;
}