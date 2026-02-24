#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> history;
    string s;
    // Read addresses until "end"
    while (cin >> s && s != "end") {
        history.push_back(s);
    }

    int Q;
    cin >> Q;
    string cmd, addr;
    auto curr = history.begin(); // Start at head

    for (int i = 0; i < Q; i++) {
        cin >> cmd;
        if (cmd == "visit") {
            cin >> addr;
            auto it = history.begin();
            bool found = false;
            while (it != history.end()) {
                if (*it == addr) {
                    curr = it;
                    found = true;
                    break;
                }
                ++it;
            }
            if (found) {
                cout << *curr << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (cmd == "next") {
            auto temp = curr;
            ++temp;
            if (temp != history.end()) {
                curr = temp;
                cout << *curr << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (cmd == "prev") {
            if (curr != history.begin()) {
                --curr;
                cout << *curr << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}