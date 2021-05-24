#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    int a[] = {2010,2015,2016,2017,2019};
    cin>>t;
    while(t--)
    { 
       int n,flag=0;
       cin>>n;
       for(int i=0;i<5;i++)
       { 
          if(a[i]==n)
          { 
             flag=1;
             break;
          }
       }
       if(flag==1)
       cout<<"HOSTED"<<endl;
       else
       cout<<"NOT HOSTED"<<endl;
    }
    return 0;
}