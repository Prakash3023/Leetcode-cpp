#include <iostream>
using namespace std;

bool canAliceWin(int n) {
    if (n - 10 < 0)
        return false;
    n -= 10;
    if (n - 9 < 0)
        return true;
    n -= 9;
    if (n - 8 < 0)
        return false;
    n -= 8;
    if (n - 7 < 0)
        return true;
    n -= 7;
    if (n - 6 < 0)
        return false;
    n -= 6;
    if (n - 5 < 0)
        return true;
    n -= 5;
    if (n - 4 < 0)
        return false;
    n -= 4;
    if (n - 3 < 0)
        return true;
    n -= 3;
    if (n - 2 < 0)
        return false;
    n -= 2;
    if (n - 1 < 0)
        return true;
    n -= 1;
    return true;
}

int main() {
    int n;
 
    cout << "Enter a number: ";
    cin >> n;
 
    if (canAliceWin(n)) {
        cout << "Alice can win." << endl;
    } else {
        cout << "Alice cannot win." << endl;
    }

    return 0;
}
