#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int D,d,p,q;
      cin>>D>>d>>p>>q;
      int sum=0;
       if((D/d)%2==0)
       { 
          sum = sum + d *  (((D/d) / 2) * (2 * p + ((D/d)- 1) * q));
       }
       else
         {
           sum = sum + d * ((D/d) * ( p + (((D/d)- 1)/2) * q));
         }
          sum = sum +  (p + (D/d) * q) * (D%d);
          ;
          cout<<sum<<endl;
   }
   return 0;
}