#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
     {
        cin >> a[i];
    }
    int count = 0; 
    int prime[n];  

    for (int i = 0; i < n; i++) 
    {
        int isprime = 1;  

        if (a[i] <= 1) 
        {
            isprime = 0; 
        } else {
            for (int j = 2; j <= sqrt(a[i]); j++) 
            {
                if (a[i] % j == 0) {
                    isprime = 0; 
                    break;
                }
            }
        }
        if (isprime)
         {
            prime[count] = a[i];
            count++;
        }
    }
    cout << count << endl;
    for (int k = 0; k < count; k++)
     {
       cout << prime[k] << " ";
     }
    cout << endl;

    return 0;
}
