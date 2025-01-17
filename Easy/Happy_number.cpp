#include <iostream>
#include <unordered_set>
using namespace std;

int getNextNumber(int n) {
    int output = 0;
    while (n > 0) {
        int digit = n % 10;
        output += digit * digit;
        n /= 10;
    }
    return output;
}

bool isHappy(int n) {
    unordered_set<int> visit;
    
    while (visit.find(n) == visit.end()) {
        visit.insert(n);
        n = getNextNumber(n);
        if (n == 1) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (isHappy(n)) {
        cout << n << " is a happy number!" << endl;
    } else {
        cout << n << " is not a happy number!" << endl;
    }
    
    return 0;
}
