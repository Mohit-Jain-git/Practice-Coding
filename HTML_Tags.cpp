#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      string a;
      cin>>a;
      int c=0;
      int l = a.size();
      if(a[0]!='<' || a[1]!='/' || a[l-1]!='>')
      {
      cout<<"Error"<<endl;
      }
      else if((l-3)==0)
      cout<<"Error"<<endl;
      else
      { 
         for(int i=2;i<l-1;i++)
         { 
            if((a[i]>='a' &&  a[i]<='z') || (a[i]>='0' && a[i]<='9'))
            {
               c++;
            }
         }
      if(c!=(l-3))
      cout<<"Error"<<endl;
      else
      cout<<"Success"<<endl;
   }
   }
   return 0;
}