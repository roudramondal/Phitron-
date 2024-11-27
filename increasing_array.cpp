#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, i, arr[200000];
  cin >> n;
  int move = 0;
  for (i = 1; i <= n;i++)
  {
    cin >> arr[i];
  }
  for (i = 1; i <= n;i++)
  {
    if (arr[i]<arr[i-1])
    {
      move += (arr[i - 1] - arr[i]);
      arr[i] = arr[i - 1];
    }
  }
  cout << move << endl;
  return 0;
}