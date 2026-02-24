#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) // O(N)
    {
        for(int j = 0; j < m; j++) // O(M)
        {                           // O(N * M) Complexity
            cout << "Hello" << endl;
        }
    }

    return 0;
}