#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   long long int t;
   cin>>t;
   while(t--)
   { 
       long long int n;
       cin>>n;
      long long  int p,q;
       p = (-1+(sqrt(1-(4*n*2*(-1)))))/2;
       q = (-1-(sqrt(1-(4*n*2*(-1)))))/2;
       cout<<max(p,q)<<endl;
   }
   return 0;
}