#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) // O(n)
    {
        for(int j = 0; j < n; j = j * 2) // O(log n)
        {
            // O(n * log n) Complexity
            cout << "Hello" << endl;
        }
    }

    return 0;
}