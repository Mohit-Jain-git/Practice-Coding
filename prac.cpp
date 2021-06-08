#include<iostream>
using namespace std;
int main()
{ 
   string s;
   cin>>s;
   string t;
   cin>>t;
   string p;
   for(int i=0;i<t.size()-1;i--)
    p[i]=t[i];
   if(s.compare(p)==0)
   cout<<"Yes"<<endl;
   else
   cout<<"No"<<endl;
   return 0;
}