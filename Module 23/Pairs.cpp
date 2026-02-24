#include <bits/stdc++.h>
using namespace std;

// Custom comparator for sorting
bool cmp(pair<string, int> l, pair<string, int> r)
{
    if (l.first == r.first)
        return l.second > r.second; // Descending by integer if strings are equal
    return l.first < r.first; // Ascending by string
}

int main()
{
    vector<pair<string, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        cin >> name >> marks;
        v.push_back({name, marks});
    }

    // Sort using custom comparator
    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}