//To make all the array element equals to zero

#include <iostream>
#include <cmath>

int countValidSelections(int nums[], int size) {
    int leftSum[size];
    int rightSum[size];

    for (int i = 0; i < size; i++) {
        leftSum[i] = 0;
        rightSum[i] = 0;
    }

    for (int i = 1; i < size; i++) {
        leftSum[i] = leftSum[i - 1] + nums[i - 1];
    }

    for (int i = size - 2; i >= 0; i--) {
        rightSum[i] = rightSum[i + 1] + nums[i + 1];
    }

    int ans = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] == 0) {
            if (leftSum[i] == rightSum[i]) {
                ans += 2;
            } else if (abs(leftSum[i] - rightSum[i]) == 1) {
                ans += 1;
            }
        }
    }

    return ans;
}

int main() {
    int nums[] = {0, 1, 0, -1, 0};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = countValidSelections(nums, size);
    std::cout << "The number of valid selections is: " << result << std::endl;

    return 0;
}
