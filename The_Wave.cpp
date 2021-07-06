#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int n,q,c=0,d=0,z=0,i,j;
   cin>>n>>q;
   int  a[n],x[q];
   for(i=1;i<=n;i++)
   cin>>a[i];
   for(j=1;j<=q;j++)
   {
      cin>>x[j];
      for(i=1;i<=n;i++)
      {
         if((x[j]-a[i])==0)
         z++;
         else if((a[i]-x[j])<0) 
         d++;
    }
      if(z>=1)
      cout<<"0"<<endl;
      else if(d%2==0)
      cout<<"POSITIVE"<<endl;
      else
      cout<<"NEGATIVE"<<endl;
   }

}