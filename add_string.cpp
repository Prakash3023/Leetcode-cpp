#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size(), n2 = num2.size(), carry = 0;
        string res;

        for (int i = n1 - 1, j = n2 - 1; i >= 0 || j >= 0 || carry; --i, --j) {
            int d1 = i >= 0 ? num1[i] - '0' : 0;
            int d2 = j >= 0 ? num2[j] - '0' : 0;

            int sum = d1 + d2 + carry;
            res += (sum % 10) + '0';
            carry = sum / 10;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution solution;
    string num1, num2;
 
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
 
    string result = solution.addStrings(num1, num2);
 
    cout << "The sum is: " << result << endl;

    return 0;
}
