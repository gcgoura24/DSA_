#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int freq[26] = {0};
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        
        int max_freq = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
            }
        }
        
        int result;
        if (max_freq == 1) {
            if (n == 1) {
                result = 1;
            } else if (n == 2) {
                result = 2;  
            } else {
                result = n - 1;
            }
        } else {
            result = max_freq;
        }
        
        cout << result << "\n";
    }
    
    return 0;
}