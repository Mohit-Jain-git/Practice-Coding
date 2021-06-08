#include<iostream>
using namespace std;
int main()
{ 
   int n,k,z,y;
   cin>>n>>k;
   int a[n];
   for(int i=1;i<=n;i++)
   cin>>a[i];
   while(k)
   { 
       z = a[n];
       y = z;
       a[n] = y;
       k--;
   }
   cout<<a[n]<<endl;
}