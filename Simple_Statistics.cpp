#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
     int  n,k,sum=0;
     cin>>n>>k;
     int  a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
     sort(a,a+n);
     for(int i=k;i<n-k;i++)
     sum+=a[i];
     double z = n-2*k;
     double m = sum/z;
     printf("%.6f\n",m);
   }
   return 0;
}