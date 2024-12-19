#include <iostream>
#include <algorithm>

using namespace std;

void sortArray(int nums[], int n) {
    if (n == 0) return;
    
    int min = *min_element(nums, nums + n);
    int max = *max_element(nums, nums + n);
    
    int countSize = max - min + 1;
    int* count = new int[countSize]();
    
    for (int i = 0; i < n; i++) {
        count[nums[i] - min]++;
    }
    
    int index = 0;
    for (int i = 0; i < countSize; i++) {
        while (count[i]-- > 0) {
            nums[index++] = i + min;
        }
    }
    
    delete[] count;
}

int main() {
    int nums[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    sortArray(nums, n);
    
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}
