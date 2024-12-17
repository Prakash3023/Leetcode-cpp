#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int removePalindromeSub(string s) {
    if (s.empty()) return 0;
    if (isPalindrome(s)) return 1;
    return 2;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int result = removePalindromeSub(s);
    cout << "Minimum number of steps to remove the string: " << result << endl;
    return 0;
}
