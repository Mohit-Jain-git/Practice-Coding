#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  long long int t;
  cin>>t;
  while(t--)
  { 
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    { 
       cin>>arr[i];
    }
    vector <long> even;
    vector<long> odd;
    for(int i=0;i<n;i++)
    { 
       if(arr[i]%2==0)
       even.push_back(arr[i]);
       else
       odd.push_back(arr[i]);
    }
    for(int i=0;i<even.size();i++)
     cout<<even[i]<<" ";
     for(int i=0;i<odd.size();i++)
     cout<<odd[i]<<" ";
     cout<<endl;
  }
  return 0;
}