#include<iostream>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
       int n,m;
       cin>>n>>m;
       set<int> s;
       vector<int> v;
       int a[n];
       for(int i=0;i<n;i++)
       { 
          cin>>a[i];
          v.push_back(a[i]);
          s.insert(a[i]);
       }
       if(m==n)
       { 
          if(s.size()!==m)
          cout<<"NO"<<endl;
          else
          cout<<"YES"<<endl;
       }
       else if(n>m)
       { 
          if(s.size()==m)
          cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
       }
       else
       { 
          for(int i=1;i<m+1;i++)
          { 
             s.insert(a[i-1]);
             if(i%n==0)
             { 
                if(s.size()!=n)
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl;
             }
          }
       }
   }
}