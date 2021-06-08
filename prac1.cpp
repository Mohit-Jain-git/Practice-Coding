#include<iostream>
using namespace std;
int main()
{ 
   int a,b,c,k,z,p;
   cin>>a>>b>>c>>k;
   if(a>k)
   cout<<k*1<<endl;
   else if(a<k)
   { 
      k=k-a;
      if(b>k)
      { 
          z = b-k;
         if(z>a)
         cout<<"0"<<endl;
         else
         cout<<a*1<<endl;
      }
      else
      { 
          k = k-b;
          if(z>k)
          { 
              p = z-k;
             if(p>z && p>a)
             cout<<p*(-1)<<endl;
             else if(z>p && z>a)
             cout<<"0"<<endl;
             else
             cout<<a*1<<endl;
          }
      }
   }
   return 0;
}