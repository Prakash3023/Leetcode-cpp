#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n;

    int index = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[i - 1]) {
            arr[index++] = arr[i];
        }
    }
    return index;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int newLength = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
