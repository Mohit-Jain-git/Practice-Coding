#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      long long int a,b,rem,e=0,f=0,g=0,h=0,i=0,j=0;
      cin>>a>>b;
      long long int s = a + b;
       while(s>0)
       { 
          rem = s%10;
          if(rem==0 || rem==6 || rem==9)
          {
          e=e+6;
          }
          else if(rem==1)
          {
          f=f+2;
          }
          else if(rem==2 || rem==5 || rem==3)
          {
          g=g+5;
          }
          else if(rem==4)
          {
          h=h+4;
          }
          else if(rem==7)
          {
          i=i+3;
          }
          else if(rem==8)
          {
          j=j+7;
          }
          s=s/10;
       }
       cout<<(e+f+g+h+i+j);
       cout<<endl;
   }
   return 0;
}