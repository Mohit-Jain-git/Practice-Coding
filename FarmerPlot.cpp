#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{ 
    if(b==0)
    return a;
    gcd(b,a%b);
}
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int l,b,i;
      cin>>l>>b;
      int s = gcd(l,b);
      cout<<(l*b)/(s*s)<<endl;
   }
   return 0;
}