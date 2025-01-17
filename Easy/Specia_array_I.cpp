#include <iostream>
#include <vector>

using namespace std;

bool isArraySpecial(const vector<int>& nums) {
    for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i - 1] % 2 == nums[i] % 2) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    if (isArraySpecial(nums)) {
        cout << "The array is special.\n";
    } else {
        cout << "The array is not special.\n";
    }

    return 0;
}
