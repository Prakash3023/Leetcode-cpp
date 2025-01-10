#include <iostream>
#include <vector>
using namespace std;

int sumOfSquares(vector<int>& nums) {
    int total = 0;
    int n = nums.size();
    for (int i = 1; i <= n; i++) {
        int val = nums[i - 1];
        if (n % i == 0) {
            total += val * val;
        }
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << sumOfSquares(nums) << endl;
    return 0;
}
