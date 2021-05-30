#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    float a,b;
    char c;
    cin>>a>>b>>c;
    if(c=='+')
    cout<<fixed<<setprecision(6)<<a+b<<endl;
    else if(c=='-')
    cout<<fixed<<setprecision(6)<<a-b<<endl;
    else if(c=='*')
    cout<<fixed<<setprecision(6)<<a*b<<endl;
    else if(c=='/')
    cout<<fixed<<setprecision(6)<<a/b<<endl;
    return 0;
}