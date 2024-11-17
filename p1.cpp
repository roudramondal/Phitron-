#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int a [n];
  for (int i = 0; i < n;i++)
  {
    cin >> a[i];
  }
  int n1 = sizeof(a) / sizeof(a[0]);
  int max = a[0];
  
  for (int i = 0; i< n1;i++)
  {
    if (a[i]>max)
    {
      max = a[i];
     // break;
    }
  }
  cout << max << endl;
}