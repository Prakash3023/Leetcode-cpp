#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int permutationDifference(const string& str1, const string& str2) {
    int freq1[256] = {0};
    int freq2[256] = {0};

    for (char c : str1) {
        freq1[c]++;
    }

    for (char c : str2) {
        freq2[c]++;
    }

    int difference = 0;

    for (int i = 0; i < 256; i++) {
        difference += abs(freq1[i] - freq2[i]);
    }

    return difference;
}

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    int result = permutationDifference(str1, str2);
    cout << "The permutation difference between the two strings is: " << result << endl;

    return 0;
}
