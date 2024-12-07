#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n,i;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n;i++)
  {
    cin >> arr[i];
  }
  int key;
  cin >> key;
  int min = arr[0];
  for ( i = 0; i < n-1;i++)
  {
    int midindex = i;
    for (int j = i + 1; j < n;j++)
    {
      if (arr[j]<arr[midindex])
        midindex = j;
    }
    int temp = arr[i];
    arr[i] = arr[midindex];
    arr[midindex] = temp;
  }
  cout << arr[key - 1] << endl;
  return 0;
}