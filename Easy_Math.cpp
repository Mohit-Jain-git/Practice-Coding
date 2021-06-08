#include<bits/stdc++.h>
using namespace std;
int findsum(int m)
{ 
    int sum=0,rem;
    while(m!=0)
    { 
       rem=m%10;
       sum=sum+rem;
       m=m/10;
    }
    return sum;
}
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n;
      cin>>n;
      int a[n],max=0;
      for(int i=0;i<n;i++)
      { 
          cin>>a[i];
      }
      for(int i=0;i<n-1;i++)
      { 
         for(int j=i+1;j<n;j++)
         { 
           int mul = a[i]*a[j];
           int c = findsum(mul);
           if(c>max)
           max=c;
         }
      }
      cout<<max<<endl;
   }
   return 0;
}