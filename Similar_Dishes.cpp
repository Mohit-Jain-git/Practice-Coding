#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      string s[4],p[4];
      int c=0;
      for(int i=0;i<4;i++)
      cin>>s[i];
      for(int i=0;i<4;i++)
      cin>>p[i];
      for(int i=0;i<4;i++)
      { 
         for(int j=0;j<4;j++)
         { 
            int x = s[i].compare(p[j]);
            if(x==0)
            c++;
         }
      }
      if(c>=2)
      cout<<"similar"<<endl;
      else
      cout<<"dissimilar"<<endl;
   }
   return 0;
}