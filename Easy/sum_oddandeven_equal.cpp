#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cout << "Enter a number: ";
    cin >> num;

    int n = num.length();
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even += num[i] - '0';
        } else {
            odd += num[i] - '0';
        }
    }

    if (even == odd) {
        cout << "The sum of digits at even and odd positions are equal." << endl;
    } else {
        cout << "The sum of digits at even and odd positions are not equal." << endl;
    }

    return 0;
}
