#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void swap(ll *a, ll *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(ll arr[], ll low, ll high)
{
  int pivot = arr[high]; // pivot
  int i = (low - 1);     // Index of smaller element and indicates the right position of pivot found so far

  for (ll j = low; j <= high - 1; j++)
  {
    // If current element is smaller than the pivot
    if (arr[j] < pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quickSort(ll arr[], ll low, ll high)
{
  if (low < high)
  {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

/* Function to print an array */
void printArray(ll arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
      cin >> arr[i];
    quickSort(arr, 0, n - 1);
    cout << arr[1] - arr[0] << endl;
  }
  return 0;
}
