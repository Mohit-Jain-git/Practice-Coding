#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        long long int a;
        for(int i=0;i<51;i++)
        { 
             cin>>a;
             v.push_back(a);
             if(getchar()!=' ')
             break;
        }
        long long int s = v.size()-1;
        sort(v.begin(),v.end(),greater<int>());
        if(v[0]==s)
        cout<<v[1]<<endl;
        else
        cout<<v[0]<<endl;
    }
    return 0;
}