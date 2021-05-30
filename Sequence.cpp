#include<bits/stdc++.h>
using namespace std;
bool isSubset(int arr1[], int arr2[],
              int m, int n)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }
        if (j == m)
            return 0;
    }

    return 1;
}
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int m,c=0;
      cin>>m;
      int arr1[m];
      for(int i=0;i<m;i++)
      cin>>arr1[i];
      int n;
      cin>>n;
      int arr2[n];
      for(int i=0;i<n;i++)
      cin>>arr2[i];
     if (isSubset(arr1, arr2, m, n))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
   }
   return 0;
}