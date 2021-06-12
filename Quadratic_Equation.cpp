#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   float a,b,c;
   cin>>a>>b>>c;
   float x,y;
   x = (-b+sqrt(b*b-4*a*c))/2*a;
   y = (-b-sqrt(b*b-4*a*c))/2*a;
   printf("%0.6f\n",x);
   printf("%0.6f\n",y);
   return 0;
}