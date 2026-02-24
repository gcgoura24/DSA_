#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int Q;
    cin >> Q;
    
    map<long long int , int> mp;
    
    while (Q--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            long long X;
            cin >> X;
            mp[X]++;
        } else {
            if (mp.empty()) {
                cout << "empty\n";
            } else {
                long long minVal = mp.begin()->first;
                cout << minVal << '\n';
                mp.erase(mp.begin());
            }
        }
    }
    
    return 0;
}