#include<bits/stdc++.h>
// #define ll long long int 
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
     int x;
     cin>>x;
     char s[x][100];
     for(int i=0;i<x;i++)
     { 
        cin>>s[i];
     }
     int p=0;
     for(int i=0;i<x;i++)
     { 
       if(s[i][0]>='a' && s[i][0]<='z')
       { 
          if(s[i][0]>='a' && s[i][0]<='m')
          { 
             for(int j=0;s[i][j]!='\0';j++)
             { 
                 if(!(s[i][j]>='a' && s[i][j]<='m'))
                 { 
                    p=1;
                    break;
                 }
             }
          }
          else
          { 
            p=1;
          }
       }
          else
          { 
            if(s[i][0]>='N' && s[i][0]<='Z')
            { 
                for(int j=0;s[i][j]!='\0';j++)
              { 
                   if(!(s[i][j]>='N' && s[i][j]<='Z'))
                 { 
                    p=1;
                    break;
                 }
              }
            }
            else 
             p=1;
          }
          if(p==1)
          break;
       }
       if(p==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
     }
}