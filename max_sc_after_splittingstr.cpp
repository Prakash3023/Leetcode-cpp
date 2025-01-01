#include <iostream>
#include <string>
#include <climits>
using namespace std;

int maxScore(string inputStr) {
    int onesCount = 0, zerosCount = 0, bestScore = INT_MIN;

    for (int i = 0; i < inputStr.size() - 1; i++) {
        if (inputStr[i] == '1') onesCount++;
        else zerosCount++;
        bestScore = max(bestScore, zerosCount - onesCount);
    }

    if (inputStr[inputStr.size() - 1] == '1') onesCount++;

    return bestScore + onesCount;
}

int main() {
    string inputStr;
    cin >> inputStr;
    cout << maxScore(inputStr) << endl;
    return 0;
}
