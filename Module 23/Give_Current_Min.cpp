#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;
    while (q--) {
        int type;
        cin >> type;

        if (type == 0) { // Insert X
            long long x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << "\n";
        }
        else if (type == 1) { // PrintMin
            if (pq.empty()) cout << "Empty\n";
            else cout << pq.top() << "\n";
        }
        else if (type == 2) { // DeleteMin
            if (pq.empty()) {
                cout << "Empty\n";
            } else {
                pq.pop();
                if (pq.empty()) cout << "Empty\n";
                else cout << pq.top() << "\n";
            }
        }
    }
    return 0;
}
