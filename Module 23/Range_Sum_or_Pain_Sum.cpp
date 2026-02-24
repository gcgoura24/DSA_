#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long N, Q;
    cin >> N >> Q;
    
    while (Q--) {
        long long L, R;
        cin >> L >> R;
        
        // 1 থেকে R পর্যন্ত যোগফল
        long long s1 = R / 2;
        long long sumR = s1 * (s1 + 1);
        if (R % 2 == 1) sumR += (s1 + 1);
        
        // 1 থেকে L-1 পর্যন্ত যোগফল
        long long s2 = (L - 1) / 2;
        long long sumL = s2 * (s2 + 1);
        if ((L - 1) % 2 == 1) sumL += (s2 + 1);
        
        long long result = sumR - sumL;
        cout << result << "\n";
    }
    
    return 0;
}