#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        map<string, int> freq;

        int max_count = 0;
        string max_word;

        while (ss >> word) {
            freq[word]++;

            // If this word sets a new highest count, update answer
            if (freq[word] > max_count) {
                max_count = freq[word];
                max_word = word;
            }
        }

        cout << max_word << " " << max_count << "\n";
    }
    return 0;
}
