
#include <iostream>
#include <vector>
using namespace std;

int countSubarrays(vector<int>& nums) {
    int res = 0;
    for (int i = 2; i < nums.size(); i++) {
        if (nums[i - 1] == (nums[i - 2] + nums[i]) * 2) {
            res++;
        }
    }
    return res;
}

int main() {
    vector<int> nums = {2, 8, 2, 6, 14, 6};
    int result = countSubarrays(nums);
    cout << "Number of valid subarrays: " << result << endl;
    return 0;
}
