#include<iostream>
using namespace std;
const int MX = 1e6 + 6;
const int MOD = 1e9 + 7;
int power(long long f, unsigned int s, int p)
{
    int r = 1; 
 
    f = f % p; 
  
    if (f == 0) return 0; 
 
    while (s > 0)
    {
        
        if (s & 1)
            r = (r*f) % p;
 
      
        s = s>>1; 
        f = (f*f) % p;
    }
    return r;
}
int main()
{ 
  int t;
  cin>>t;
  while(t--)
  { 
     int n,m;
     cin>>n>>m;
     int a = power(2,m-1,MOD);
     cout<<a<<endl;
  }
  return 0;
}