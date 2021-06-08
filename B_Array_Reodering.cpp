#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b);
 
void segregateEvenOdd(int arr[], int size)
{
    int left = 1, right = size;
    while (left < right)
    {
        while (arr[left] % 2 == 0 && left < right)
            left++;
        while (arr[right] % 2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   { 
      int n,c=0;
      cin>>n;
      int a[n];
      for(int i=1;i<=n;i++)
      { 
         cin>>a[i];
      }
          segregateEvenOdd(a, n);
      for(int i=1;i<n;i++)
      { 
         for(int j=i+1;j<=n;j++)
         { 
              int p = a[i];
              int z = 2*a[j];
              int y = gcd(p,z);
              if(i>=1 && i<j && j<=n && y>1)
              c++;
         }
      }
      cout<<c<<endl;
   }
}