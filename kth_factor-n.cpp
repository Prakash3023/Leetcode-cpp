#include <iostream>
using namespace std;

int kthFactor(int n, int k) {
    for (int i = 1; i <= n / i; i++) {
        if (n % i == 0) {
            if (--k == 0) return i;
            if (i != n / i && --k == 0) return n / i;
        }
    }
    return -1;
}

int main() {
    int n, k;
    cout << "Enter the number n: ";
    cin >> n;
    cout << "Enter the k-th factor to find: ";
    cin >> k;

    int result = kthFactor(n, k);
    if (result != -1) {
        cout << "The " << k << "-th factor of " << n << " is: " << result << endl;
    } else {
        cout << k << "-th factor does not exist for " << n << endl;
    }

    return 0;
}
