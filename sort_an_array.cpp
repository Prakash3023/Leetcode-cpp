#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortArray(std::vector<int>& nums) {
    if (nums.empty()) return nums;

    int min = *std::min_element(nums.begin(), nums.end());
    int max = *std::max_element(nums.begin(), nums.end());

    std::vector<int> count(max - min + 1, 0);
    for (int num : nums) {
        count[num - min]++;
    }

    int index = 0;
    for (int i = 0; i < count.size(); i++) {
        while (count[i]-- > 0) {
            nums[index++] = i + min;
        }
    }

    return nums;
}

int main() {
    std::vector<int> nums = {5, 2, 3, 1, 4};
    std::vector<int> sorted = sortArray(nums);

    for (int num : sorted) {
        std::cout << num << " ";
    }

    return 0;
}
