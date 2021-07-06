#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
       int a[30],s=0,i;
       for(i=0;i<30;i++)
        cin>>a[i];
       for(i=0;i<30;i++)
       { 
          if(a[i]==1)
          s++;
          else
          s=0;
        if(s>5)
        { 
            cout<<"#coderlifematters"<<endl;
            break;
        }
      }
       if(i==30)
       cout<<"#allcodersarefun"<<endl;
   }
   return 0;
}