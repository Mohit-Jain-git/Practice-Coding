#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { 
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        { 
             cin>>a[i];
        }
        for(int i=0;i<m;i++)
        { 
             cin>>b[i];
             if(b[i]==1)
             cout<<"0"<<" ";
             cout<<abs(i-b[i])<<" ";
        }
        cout<<endl;
    }
    return 0;
}