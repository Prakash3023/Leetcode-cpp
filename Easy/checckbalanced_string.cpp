#include <iostream>
#include <vector>
using namespace std;

bool isBalanced(const vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }

    int leftSum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        totalSum -= arr[i];
        if (leftSum == totalSum) {
            return true;
        }
        leftSum += arr[i];
    }

    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};
    if (isBalanced(arr)) {
        cout << "The array is balanced." << endl;
    } else {
        cout << "The array is not balanced." << endl;
    }

    return 0;
}
