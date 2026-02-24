#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        // Determine reachability for Leapy and Jumpster using the pattern / threshold logic

        bool leapy, jumpster;

        // Leapy: jumps 3 or 4
        // largest unreachable (Frobenius) = 3*4 - 3 - 4 = 5 → so for n > 5, Leapy always reachable
        if (n > 5) {
            leapy = true;
        } else {
            // check small cases 0..5 by enumerating combinations 3x + 4y = n
            leapy = false;
            for (int x = 0; x * 3 <= n && !leapy; x++) {
                int rem = n - x * 3;
                if (rem % 4 == 0) {
                    leapy = true;
                    break;
                }
            }
        }

        // Jumpster: jumps 3 or 5
        // largest unreachable = 3*5 - 3 - 5 = 7 → so for n > 7, Jumpster always reachable
        if (n > 7) {
            jumpster = true;
        } else {
            // check small cases 0..7 by enumerating combinations 3x + 5y = n
            jumpster = false;
            for (int x = 0; x * 3 <= n && !jumpster; x++) {
                int rem = n - x * 3;
                if (rem % 5 == 0) {
                    jumpster = true;
                    break;
                }
            }
        }

        // Output based on which are reachable
        if (leapy && jumpster) {
            cout << "Both\n";
        } else if (leapy) {
            cout << "Leapy\n";
        } else if (jumpster) {
            cout << "Jumpster\n";
        } else {
            cout << "None\n";
        }
    }
    return 0;
}
