#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(const vector<int>& arr) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (size_t i = 1; i < arr.size(); ++i) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = maxSubArraySum(arr);
    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}
