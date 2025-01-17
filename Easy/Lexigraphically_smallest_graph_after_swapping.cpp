#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string getSmallestString(string s) {
    int n = s.size();
    for (int i = 0; i < n - 1; i++) {
        int a = s[i] - '0';
        int b = s[i + 1] - '0';
  
        if (a % 2 == b % 2 && a > b) {
            swap(s[i], s[i + 1]);   
            break;   
        }
    }
    return s;
}

int main() {
    string input;
    cin >> input;  
    cout << getSmallestString(input) << endl;   
    return 0;
}
