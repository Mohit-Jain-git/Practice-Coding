#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { 
        int n,m,k,a=0,b=0;
        cin>>n>>m>>k;
        while(k--)
        { 
          if(n==m)
          { 
            break;
          }
           else if(n>m)
           m++;
          else  
           n++;
        }
        cout<<abs(n-m)<<endl;
    }
    return 0;
}