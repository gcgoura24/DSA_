#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);  // Declaring vector of size n

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        // Check if v[i] + 1 exists in the vector
        auto it = find(v.begin(), v.end(), v[i] + 1);
        if (it != v.end())// this means "If the element is found"
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
