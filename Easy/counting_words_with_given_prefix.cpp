#include <iostream>
#include <vector>
#include <string>

using namespace std;

int prefixCount(vector<string>& words, const string& pref) {
    int count = 0;
    int n = pref.length();

    for (const string& word : words) {
        if (word.size() >= n && word.compare(0, n, pref) == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<string> words;
    string word, prefix;
    int n;

    cout << "Enter the number of words: ";
    cin >> n;

    cout << "Enter the words:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> word;
        words.push_back(word);
    }

    cout << "Enter the prefix: ";
    cin >> prefix;

    int result = prefixCount(words, prefix);
    cout << "Number of words with prefix '" << prefix << "': " << result << endl;

    return 0;
}
