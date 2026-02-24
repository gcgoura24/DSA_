#include <bits/stdc++.h>
using namespace std;

void print_left(const list<long long int>& l) {
    cout << "L -> ";
    for (auto v : l) cout << v << " ";
    cout << endl;
}

void print_right(const list<long long int >& l) {
    cout << "R -> ";
    vector<long long int> temp;
    for (auto v : l) 
    {
    temp.push_back(v);
    }
    for (int i = temp.size() - 1; i >= 0; i--) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    list<long long int> l;
    for (int i = 0; i < Q; i++) {
        int X;
        long long int V;
        cin >> X >> V;
        if (X == 0) {
            l.push_front(V);
        } else if (X == 1) {
            l.push_back(V);
        } else if (X == 2) {
            if (V >= 0 && V < l.size()) {
                auto it = l.begin();
                for (long long int j = 0; j < V; j++) {
                    ++it;
                }
                l.erase(it);
            }
        }
        print_left(l);
        print_right(l);
    }
    return 0;
}