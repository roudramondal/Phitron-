#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid Input. N should be a positive integer." << endl;
        return 0;
    }

    int fib[N];

    
    fib[0] = 0;
    if (N > 1) {
        fib[1] = 1;
    }

    
    for (int i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    
    for (int i = 0; i < N; i++) {
        cout << fib[i] << " ";
    }
    cout << endl;

    return 0;
}
