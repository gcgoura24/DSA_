#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        stack<char> st;
        for (char ch : str) {
            if (!st.empty() && st.top() == '0' && ch == '1') {
                st.pop(); // eliminate 0 and 1
            } else {
                st.push(ch); // push current character
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