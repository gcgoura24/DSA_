#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        stack<char> st;
        for (char c : S) {
            if (!st.empty() && st.top() != c) {
                // Valid pair (0-1 or 1-0)
                st.pop();
            } else {
                // No pair or same character
                st.push(c);
            }
        }
        if (st.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
