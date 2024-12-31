#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<int> idx;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            idx.push_back(i);
        }
    }
    return idx;
}

int main() {
    vector<int> nums;
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        nums.push_back(element);
    }
    cout << "Enter the target value: ";
    cin >> target;
    vector<int> result = targetIndices(nums, target);
    cout << "Target indices are: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}
