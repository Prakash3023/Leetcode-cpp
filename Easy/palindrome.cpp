#include <iostream>
using namespace std;

bool isPalindromeNumber(int num) {
    if (num < 0) return false;

    int original = num;
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    cout << isPalindromeNumber(121) << endl;
    cout << isPalindromeNumber(-121) << endl;
    cout << isPalindromeNumber(10) << endl;
    cout << isPalindromeNumber(0) << endl;

    return 0;
}
