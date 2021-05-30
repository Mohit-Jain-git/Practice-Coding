#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
     int n,b,max=0;
     cin>>n>>b;
     for(int i=0;i<n;i++)
     { 
         int w,h,p;
         cin>>w>>h>>p;
         if(w*h>max && p<=b)
           max = w*h;
     }
     if(max==0)
     cout<<"no tablet"<<endl;
     else
     cout<<max<<endl;
   }
   return 0;
}