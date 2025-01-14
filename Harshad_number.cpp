#include <iostream>
using namespace std;

int sumOfTheDigitsOfHarshadNumber(int x) {
    int original = x, sum = 0;
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }
    return (original % sum == 0) ? sum : -1;
}

int main() {
    int x;
    cin >> x;
    cout << sumOfTheDigitsOfHarshadNumber(x) << endl;
    return 0;
}
