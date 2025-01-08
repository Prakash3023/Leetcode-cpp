#include <iostream>
#include <string>
using namespace std;

int possibleStringCount(string word) {
    int count = 1;
    for (int i = 1; i < word.size(); ++i) {
        if (word[i] == word[i - 1]) ++count;
    }
    return count;
}

int main() {
    string word;
    cin >> word;
    cout << possibleStringCount(word) << endl;
    return 0;
}
