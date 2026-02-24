#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    queue<string> line;

    for (int i = 0; i < Q; i++) {
        int command;
        cin >> command;

        if (command == 0) {
            string name;
            cin >> name;
            line.push(name); // Person joins the queue
        } else if (command == 1) {
            if (!line.empty()) {
                cout << line.front() << endl;
                line.pop(); // Person gets the ticket
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
