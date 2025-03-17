#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool divideArray(vector<int>& nums) {
    if (nums.size() % 2 != 0) {
        return false;
    }
    
    sort(nums.begin(), nums.end());
    int count = 0;

    for (int i = 0; i < nums.size(); i += 2) {
        if (nums[i] == nums[i + 1]) {
            count++;
        } else {
            return false;
        }
    }

    return count == nums.size() / 2;
}

int main() {
    vector<int> nums = {3, 2, 3, 2, 2, 2};
    cout << (divideArray(nums) ? "true" : "false") << endl;
    return 0;
}
